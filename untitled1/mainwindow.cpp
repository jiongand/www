#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initCity();
    wNetwork = new QNetworkAccessManager(this);
    setWindowFlag(Qt::FramelessWindowHint);
    setFixedSize(800,575);
    connect(ui->closeButton,&QPushButton::clicked,this,[=](){
        qApp->exit();
    });
    connect(wNetwork,&QNetworkAccessManager::finished,this,&MainWindow::getIt);
    connect(ui->findEdit,&QLineEdit::returnPressed,this,&MainWindow::enterEvent_);
    //connect(ui->findButton,&QPushButton::clicked,this,&MainWindow::enterEvent_);
    ui->nowWearhLabel->setScaledContents(true);
    ui->weathLable_1->setScaledContents(true);
    ui->weathLable_2->setScaledContents(true);
    ui->weathLable_3->setScaledContents(true);
    ui->weathLable_4->setScaledContents(true);
    ui->weathLable_5->setScaledContents(true);
    ui->weathLable_6->setScaledContents(true);
    ui->weathLable_7->setScaledContents(true);
    ui->weathLable_8->setScaledContents(true);
    minTemLL<<ui->minTemLable_1<<ui->minTemLable_2<<ui->minTemLable_3<<ui->minTemLable_4<<ui->minTemLable_5<<ui->minTemLable_6<<ui->minTemLable_7<<ui->minTemLable_8;
    maxTemLL<<ui->maxTemLable<<ui->maxTemLable_2<<ui->maxTemLable_3<<ui->maxTemLable_4<<ui->maxTemLable_5<<ui->maxTemLable_6<<ui->maxTemLable_7<<ui->maxTemLable_8;
    dateLL<<ui->dataLable_1<<ui->dataLable_2<<ui->dataLable_3<<ui->dataLable_4<<ui->dataLable_5<<ui->dataLable_6<<ui->dataLable_7<<ui->dataLable_8;
    weekLL<<ui->weekLable_1<<ui->weekLable_2<<ui->weekLable_3<<ui->weekLable_4<<ui->weekLable_5<<ui->weekLable_6<<ui->weekLable_7<<ui->weekLable_8;
    imageLL<<ui->weathLable_1<<ui->weathLable_2<<ui->weathLable_3<<ui->weathLable_4<<ui->weathLable_5<<ui->weathLable_6<<ui->weathLable_7<<ui->weathLable_8;
    wNameLL<<ui->wNameLabe_1<<ui->wNameLabe_2<<ui->wNameLabe_3<<ui->wNameLabe_4<<ui->wNameLabe_5<<ui->wNameLabe_6<<ui->wNameLabe_7<<ui->wNameLabe_8;
    mTypeIconMap.insert("晴", ":/sucai/sun.png");
    mTypeIconMap.insert("多云", ":/sucai/cloudsun.png");
    mTypeIconMap.insert("阴", ":/sucai/cloudy.png");
    mTypeIconMap.insert("雨", ":/sucai/Mrain.png");
    mTypeIconMap.insert("雪", ":/sucai/snow.png");
    mTypeIconMap.insert("沙尘暴", ":/sucai/jufeng.png");
    mTypeIconMap.insert("雷阵雨", ":/sucai/lightingRain.png");
    mTypeIconMap.insert("大雨", ":/sucai/Hrain.png");
    mTypeIconMap.insert("小雨", ":/sucai/rain.png");
    mTypeIconMap.insert("中雨", ":/sucai/Mrain.png");
    mTypeIconMap.insert("阵雨", ":/sucai/cloundrain.png");
    mTypeIconMap.insert("暴雨", ":/sucai/Hrain.png");
    mTypeIconMap.insert("大暴雨", ":/sucai/Hrain.png");
    mTypeIconMap.insert("大到暴雨",":/sucai/Hrain.png");
    mTypeIconMap.insert("暴雨到大暴雨",":/sucai/Hrain.png");
    mTypeIconMap.insert("大暴雨到大暴雨",":/sucai/Hrain.png");
    mTypeIconMap.insert("暴雪",":/sucai/snow.png");
    mTypeIconMap.insert("大到暴雪",":/sucai/snow.png");
    mTypeIconMap.insert("大雪", ":/sucai/snow.png");
    mTypeIconMap.insert("小雪", ":/sucai/snow.png");
    mTypeIconMap.insert("中雪", ":/sucai/snow.png");
    mTypeIconMap.insert("霾", ":/sucai/fog.png");
    mTypeIconMap.insert("扬沙", ":/sucai/fog.png");
    mTypeIconMap.insert("特大暴雨", ":/sucai/Hrain.png");
    mTypeIconMap.insert("乌", ":/sucai/cloudy.png");
    mTypeIconMap.insert("小到中雨", ":/sucai/Mrain.png");
    mTypeIconMap.insert("小到中雪", ":/sucai/snow.png");
    mTypeIconMap.insert("雨夹雪", ":/sucai/sleet.png");
    mTypeIconMap.insert("阵雪", ":/sucai/cloundsonw.png");

    cityEncode("广州");
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::cityEncode(const QString& a){
    if(city.find(a)==city.end()){
        QMessageBox::information(this,"提示","城市输入有误，请检查是否正确输入",QMessageBox::Ok);
        return false;
    }
    encode = city[a];
    QUrl url("http://t.weather.sojson.com/api/weather/city/"+encode);
    wNetwork->get(QNetworkRequest(url));
    return true;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    mOffset = event->globalPosition().toPoint() - this->pos();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPosition().toPoint() - mOffset);
}

void MainWindow::initCity(){
    QFile temp("citycode.json");
    if(!temp.open(QIODevice::ReadOnly|QIODevice::Text)){
        return;
    }
    QByteArray js = temp.readAll();
    temp.close();
    QJsonParseError err;
    QJsonDocument data = QJsonDocument::fromJson(js,&err);
    if(err.error != QJsonParseError::NoError || !data.isArray()){
        return;
    }
    QJsonArray shif = data.array();
    for(int i = 0;i<shif.size();++i){
        QString cityName = shif[i].toObject().value("city_name").toString();
        QString cityCode = shif[i].toObject().value("city_code").toString();
        if(!cityCode.isEmpty()){
            city.insert(cityName,cityCode);
        }
    }
}

void MainWindow::getIt(QNetworkReply * reply){
    int status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    if(reply->error()!=QNetworkReply::NoError&&status!=200){
        qDebug()<<reply->errorString().toUtf8();
        QMessageBox::warning(this,"提示","数据获取失败。",QMessageBox::Ok);
    }else{
        qDebug() << "operation: " << reply->operation();    //请求方式
        qDebug() << "status_code: " << status;         //状态码
        qDebug() << "url: " << reply->url();                //url
        qDebug() << "raw Header: " << reply->rawHeaderList(); //响应header
        QByteArray temp = reply->readAll();
        QByteArray xc = QString(temp).toUtf8();
        disposeJson(xc);
    }
    reply->deleteLater();
}

void MainWindow::enterEvent_(){
    QString city(ui->findEdit->text());
    cityEncode(city);
}

void MainWindow::disposeJson(QByteArray t){
    QJsonParseError err;
    QJsonDocument data = QJsonDocument::fromJson(t,&err);
    if(err.error!=QJsonParseError::NoError){
        QMessageBox::warning(this,"提示","信息解析失败",QMessageBox::Ok);
        return;
    }
    QJsonObject root = data.object();
    upl.time = root.value("time").toString();
    upl.city = root.value("cityInfo").toObject().value("city").toString();
    QJsonObject deeper = root.value("data").toObject();
    upl.tem = deeper.value("wendu").toString();
    upl.ganmao = deeper.value("ganmao").toString();
    upr.air = deeper.value("quality").toString();
    upr.PM = deeper.value("pm25").toString();
    upr.wet = deeper.value("shidu").toString();
    QJsonArray forc = deeper.value("forecast").toArray();
    QJsonObject today = forc[0].toObject();
    upl.feel = today.value("notice").toString();
    upl.wName = today.value("type").toString();
    upl.MaxTem = today.value("high").toString().split(" ").at(1);
    upl.minTem = today.value("low").toString().split(" ").at(1);
    upr.windA = today.value("fx").toString();
    upr.windL = today.value("fl").toString();
    for(int i = 1;i<8;++i){
        QJsonObject temp = forc[i].toObject();
        d[i].date = temp.value("date").toString();
        d[i].windA = temp.value("fx").toString();
        d[i].maxTem = temp.value("high").toString().split(" ").at(1);
        d[i].minTem = temp.value("low").toString().split(" ").at(1);
        d[i].wName = temp.value("type").toString();
        d[i].week = temp.value("week").toString();
        d[i].windL = temp.value("fl").toString();
    }
    QJsonObject yest = deeper.value("yesterday").toObject();
    d[0].date = yest.value("date").toString();
    d[0].windA = yest.value("fx").toString();
    d[0].windL = yest.value("fl").toString();
    d[0].maxTem = yest.value("high").toString().split(" ").at(1);
    d[0].minTem = yest.value("low").toString().split(" ").at(1);
    d[0].wName = yest.value("type").toString();
    upl.week = d[1].week;
    d[0].week = QString("昨天");
    d[1].week = QString("今天");
    d[2].week = QString("明天");
    update_Image();
}

void MainWindow::update_Image(){
    //左上角界面更新
    ui->cityLable->setText(upl.city);
    ui->wNameLable->setText(upl.wName);
    ui->timeLable->setText(upl.time+"  "+upl.week);
    ui->temLabel->setText(upl.tem+"°C");
    ui->feelLable->setText(upl.ganmao+"\n"+upl.feel);
    ui->temRangeLable->setText(upl.minTem+"~"+upl.MaxTem);
    ui->nowWearhLabel->clear();
    ui->nowWearhLabel->setPixmap(mTypeIconMap[upl.wName]);
    //右上角界面更新
    ui->airLabel->setText(upr.air);
    ui->wetLabel->setText(upr.wet);
    ui->windLevelLabel->setText(upr.windL);
    ui->windLable->setText(upr.windA);
    int k = upl.time.mid(5,2).toInt();
    if(d[0].date.toInt()>d[1].date.toInt()){
        dateLL.at(0)->setText(QString::number(k-1)+"/"+d[0].date);
    }else{
        dateLL.at(0)->setText(QString::number(k)+"/"+d[0].date);
    }
    weekLL.at(0)->setText(d[0].week);
    imageLL.at(0)->clear();
    imageLL.at(0)->setPixmap(mTypeIconMap[d[0].wName]);
    wNameLL.at(0)->setText(d[0].wName);
    minTemLL.at(0)->setText(d[0].minTem);
    maxTemLL.at(0)->setText(d[0].maxTem);
    //下方界面更新
    for(int i = 1;i<8;++i){
        if(i>1&&d[i-1].date.toInt()>d[i].date.toInt()){
            dateLL.at(i)->setText(QString::number(k+1)+"/"+d[i].date);
        }else{
            dateLL.at(i)->setText(QString::number(k)+"/"+d[i].date);
        }
        weekLL.at(i)->setText(d[i].week);
        imageLL.at(i)->clear();
        imageLL.at(i)->setPixmap(mTypeIconMap[d[i].wName]);
        wNameLL.at(i)->setText(d[i].wName);
        //还有一些在考虑要不要加
        minTemLL.at(i)->setText(d[i].minTem);
        maxTemLL.at(i)->setText(d[i].maxTem);
    }
}
