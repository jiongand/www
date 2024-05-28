#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>
#include<QLineEdit>
#include<QMouseEvent>
#include<QFile>
#include<QByteArray>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonParseError>
#include<QJsonObject>
#include<QtNetwork>
#include<QMessageBox>
#include"struct_.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QMap<QString,QString> city;
    QMap<QString,QString> mTypeIconMap;
    QString encode;
    bool cityEncode(const QString&);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    QPoint mOffset;
    void initCity();
    QNetworkAccessManager* wNetwork;
    void getIt(QNetworkReply*);
    void disposeJson(QByteArray);
    void enterEvent_();
    upLeft upl;
    upRight upr;
    down d[8];
    void update_Image();
    QList<QLabel*> weekLL;
    QList<QLabel*> dateLL;
    QList<QLabel*> imageLL;
    QList<QLabel*> windALL;
    QList<QLabel*> windLLL;
    QList<QLabel*> wNameLL;
    QList<QLabel*> minTemLL;
    QList<QLabel*> maxTemLL;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
