/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLineEdit *findEdit;
    QPushButton *closeButton;
    QPushButton *findButton;
    QWidget *widget_2;
    QLabel *nowWearhLabel;
    QLabel *temLabel;
    QLabel *cityLable;
    QLabel *wNameLable;
    QLabel *timeLable;
    QLabel *temRangeLable;
    QLabel *feelLable;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *wetLabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *airLabel;
    QSpacerItem *horizontalSpacer_3;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *windLable;
    QLabel *windLevelLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_4;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *dataLable_1;
    QLabel *weekLable_1;
    QLabel *weathLable_1;
    QLabel *wNameLabe_1;
    QLabel *maxTemLable;
    QLabel *minTemLable_1;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *dataLable_2;
    QLabel *weekLable_2;
    QLabel *weathLable_2;
    QLabel *wNameLabe_2;
    QLabel *maxTemLable_2;
    QLabel *minTemLable_2;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *weekLable_3;
    QLabel *dataLable_3;
    QLabel *weathLable_3;
    QLabel *wNameLabe_3;
    QLabel *maxTemLable_3;
    QLabel *minTemLable_3;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *dataLable_4;
    QLabel *weekLable_4;
    QLabel *weathLable_4;
    QLabel *wNameLabe_4;
    QLabel *maxTemLable_4;
    QLabel *minTemLable_4;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_7;
    QLabel *dataLable_5;
    QLabel *weekLable_5;
    QLabel *weathLable_5;
    QLabel *wNameLabe_5;
    QLabel *maxTemLable_5;
    QLabel *minTemLable_5;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_6;
    QLabel *dataLable_6;
    QLabel *weekLable_6;
    QLabel *weathLable_6;
    QLabel *wNameLabe_6;
    QLabel *maxTemLable_6;
    QLabel *minTemLable_6;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_8;
    QLabel *dataLable_7;
    QLabel *weekLable_7;
    QLabel *weathLable_7;
    QLabel *wNameLabe_7;
    QLabel *maxTemLable_7;
    QLabel *minTemLable_7;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_9;
    QLabel *dataLable_8;
    QLabel *weekLable_8;
    QLabel *weathLable_8;
    QLabel *wNameLabe_8;
    QLabel *maxTemLable_8;
    QLabel *minTemLable_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1029, 617);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 801, 31));
        findEdit = new QLineEdit(widget);
        findEdit->setObjectName(QString::fromUtf8("findEdit"));
        findEdit->setGeometry(QRect(0, 0, 201, 25));
        closeButton = new QPushButton(widget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(770, 0, 31, 31));
        closeButton->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/sucai/close.png);"));
        findButton = new QPushButton(widget);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setGeometry(QRect(200, 0, 31, 28));
        findButton->setStyleSheet(QString::fromUtf8("image: url(:/sucai/find.png);"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 30, 411, 211));
        nowWearhLabel = new QLabel(widget_2);
        nowWearhLabel->setObjectName(QString::fromUtf8("nowWearhLabel"));
        nowWearhLabel->setGeometry(QRect(260, 20, 121, 111));
        nowWearhLabel->setStyleSheet(QString::fromUtf8(""));
        temLabel = new QLabel(widget_2);
        temLabel->setObjectName(QString::fromUtf8("temLabel"));
        temLabel->setGeometry(QRect(40, 20, 191, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft JhengHei Light")});
        font.setPointSize(42);
        font.setKerning(true);
        temLabel->setFont(font);
        temLabel->setFrameShape(QFrame::NoFrame);
        temLabel->setFrameShadow(QFrame::Plain);
        temLabel->setLineWidth(1);
        temLabel->setMidLineWidth(0);
        temLabel->setTextFormat(Qt::AutoText);
        cityLable = new QLabel(widget_2);
        cityLable->setObjectName(QString::fromUtf8("cityLable"));
        cityLable->setGeometry(QRect(30, 110, 81, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Dubai")});
        font1.setPointSize(18);
        cityLable->setFont(font1);
        wNameLable = new QLabel(widget_2);
        wNameLable->setObjectName(QString::fromUtf8("wNameLable"));
        wNameLable->setGeometry(QRect(300, 140, 41, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Dubai")});
        font2.setPointSize(12);
        wNameLable->setFont(font2);
        timeLable = new QLabel(widget_2);
        timeLable->setObjectName(QString::fromUtf8("timeLable"));
        timeLable->setGeometry(QRect(40, 0, 161, 41));
        temRangeLable = new QLabel(widget_2);
        temRangeLable->setObjectName(QString::fromUtf8("temRangeLable"));
        temRangeLable->setGeometry(QRect(120, 109, 81, 31));
        feelLable = new QLabel(widget_2);
        feelLable->setObjectName(QString::fromUtf8("feelLable"));
        feelLable->setGeometry(QRect(40, 148, 351, 51));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(460, 0, 244, 277));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalWidget_2 = new QWidget(widget_3);
        horizontalWidget_2->setObjectName(QString::fromUtf8("horizontalWidget_2"));
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(horizontalWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ink Free")});
        font3.setPointSize(13);
        label->setFont(font3);

        horizontalLayout_2->addWidget(label);

        wetLabel = new QLabel(horizontalWidget_2);
        wetLabel->setObjectName(QString::fromUtf8("wetLabel"));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sylfaen")});
        font4.setPointSize(13);
        wetLabel->setFont(font4);

        horizontalLayout_2->addWidget(wetLabel);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(horizontalWidget_2);

        widget_14 = new QWidget(widget_3);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        horizontalLayout_5 = new QHBoxLayout(widget_14);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(widget_14);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font5;
        font5.setPointSize(11);
        label_4->setFont(font5);

        horizontalLayout_5->addWidget(label_4);

        airLabel = new QLabel(widget_14);
        airLabel->setObjectName(QString::fromUtf8("airLabel"));
        QFont font6;
        font6.setPointSize(10);
        airLabel->setFont(font6);

        horizontalLayout_5->addWidget(airLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_14);

        horizontalWidget = new QWidget(widget_3);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        windLable = new QLabel(horizontalWidget);
        windLable->setObjectName(QString::fromUtf8("windLable"));
        windLable->setFont(font3);
        windLable->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(windLable);

        windLevelLabel = new QLabel(horizontalWidget);
        windLevelLabel->setObjectName(QString::fromUtf8("windLevelLabel"));
        windLevelLabel->setFont(font4);

        horizontalLayout->addWidget(windLevelLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(horizontalWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(0, 240, 801, 331));
        widget_4->setStyleSheet(QString::fromUtf8(""));
        widget_12 = new QWidget(widget_4);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(10, 10, 781, 311));
        horizontalLayout_4 = new QHBoxLayout(widget_12);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_5 = new QWidget(widget_12);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout_4 = new QVBoxLayout(widget_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        dataLable_1 = new QLabel(widget_5);
        dataLable_1->setObjectName(QString::fromUtf8("dataLable_1"));
        dataLable_1->setFont(font6);
        dataLable_1->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(dataLable_1);

        weekLable_1 = new QLabel(widget_5);
        weekLable_1->setObjectName(QString::fromUtf8("weekLable_1"));
        weekLable_1->setFont(font5);
        weekLable_1->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(weekLable_1);

        weathLable_1 = new QLabel(widget_5);
        weathLable_1->setObjectName(QString::fromUtf8("weathLable_1"));
        weathLable_1->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(weathLable_1);

        wNameLabe_1 = new QLabel(widget_5);
        wNameLabe_1->setObjectName(QString::fromUtf8("wNameLabe_1"));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        wNameLabe_1->setFont(font7);
        wNameLabe_1->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(wNameLabe_1);

        maxTemLable = new QLabel(widget_5);
        maxTemLable->setObjectName(QString::fromUtf8("maxTemLable"));
        maxTemLable->setFont(font6);
        maxTemLable->setLayoutDirection(Qt::LeftToRight);
        maxTemLable->setAutoFillBackground(false);
        maxTemLable->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(maxTemLable);

        minTemLable_1 = new QLabel(widget_5);
        minTemLable_1->setObjectName(QString::fromUtf8("minTemLable_1"));
        minTemLable_1->setFont(font6);
        minTemLable_1->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(minTemLable_1);


        horizontalLayout_4->addWidget(widget_5);

        widget_6 = new QWidget(widget_12);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_3 = new QVBoxLayout(widget_6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dataLable_2 = new QLabel(widget_6);
        dataLable_2->setObjectName(QString::fromUtf8("dataLable_2"));
        dataLable_2->setFont(font6);
        dataLable_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(dataLable_2);

        weekLable_2 = new QLabel(widget_6);
        weekLable_2->setObjectName(QString::fromUtf8("weekLable_2"));
        weekLable_2->setFont(font5);
        weekLable_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(weekLable_2);

        weathLable_2 = new QLabel(widget_6);
        weathLable_2->setObjectName(QString::fromUtf8("weathLable_2"));
        weathLable_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(weathLable_2);

        wNameLabe_2 = new QLabel(widget_6);
        wNameLabe_2->setObjectName(QString::fromUtf8("wNameLabe_2"));
        wNameLabe_2->setFont(font7);
        wNameLabe_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(wNameLabe_2);

        maxTemLable_2 = new QLabel(widget_6);
        maxTemLable_2->setObjectName(QString::fromUtf8("maxTemLable_2"));
        maxTemLable_2->setFont(font6);
        maxTemLable_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(maxTemLable_2);

        minTemLable_2 = new QLabel(widget_6);
        minTemLable_2->setObjectName(QString::fromUtf8("minTemLable_2"));
        minTemLable_2->setFont(font6);
        minTemLable_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(minTemLable_2);


        horizontalLayout_4->addWidget(widget_6);

        widget_7 = new QWidget(widget_12);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        verticalLayout_2 = new QVBoxLayout(widget_7);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        weekLable_3 = new QLabel(widget_7);
        weekLable_3->setObjectName(QString::fromUtf8("weekLable_3"));
        weekLable_3->setFont(font5);
        weekLable_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(weekLable_3);

        dataLable_3 = new QLabel(widget_7);
        dataLable_3->setObjectName(QString::fromUtf8("dataLable_3"));
        dataLable_3->setFont(font6);
        dataLable_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(dataLable_3);

        weathLable_3 = new QLabel(widget_7);
        weathLable_3->setObjectName(QString::fromUtf8("weathLable_3"));
        weathLable_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(weathLable_3);

        wNameLabe_3 = new QLabel(widget_7);
        wNameLabe_3->setObjectName(QString::fromUtf8("wNameLabe_3"));
        wNameLabe_3->setFont(font7);
        wNameLabe_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(wNameLabe_3);

        maxTemLable_3 = new QLabel(widget_7);
        maxTemLable_3->setObjectName(QString::fromUtf8("maxTemLable_3"));
        maxTemLable_3->setFont(font6);
        maxTemLable_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(maxTemLable_3);

        minTemLable_3 = new QLabel(widget_7);
        minTemLable_3->setObjectName(QString::fromUtf8("minTemLable_3"));
        minTemLable_3->setFont(font6);
        minTemLable_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(minTemLable_3);


        horizontalLayout_4->addWidget(widget_7);

        widget_8 = new QWidget(widget_12);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        verticalLayout_5 = new QVBoxLayout(widget_8);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        dataLable_4 = new QLabel(widget_8);
        dataLable_4->setObjectName(QString::fromUtf8("dataLable_4"));
        dataLable_4->setFont(font6);
        dataLable_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(dataLable_4);

        weekLable_4 = new QLabel(widget_8);
        weekLable_4->setObjectName(QString::fromUtf8("weekLable_4"));
        weekLable_4->setFont(font5);
        weekLable_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(weekLable_4);

        weathLable_4 = new QLabel(widget_8);
        weathLable_4->setObjectName(QString::fromUtf8("weathLable_4"));
        weathLable_4->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(weathLable_4);

        wNameLabe_4 = new QLabel(widget_8);
        wNameLabe_4->setObjectName(QString::fromUtf8("wNameLabe_4"));
        wNameLabe_4->setFont(font7);
        wNameLabe_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(wNameLabe_4);

        maxTemLable_4 = new QLabel(widget_8);
        maxTemLable_4->setObjectName(QString::fromUtf8("maxTemLable_4"));
        maxTemLable_4->setFont(font6);
        maxTemLable_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(maxTemLable_4);

        minTemLable_4 = new QLabel(widget_8);
        minTemLable_4->setObjectName(QString::fromUtf8("minTemLable_4"));
        minTemLable_4->setFont(font6);
        minTemLable_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(minTemLable_4);


        horizontalLayout_4->addWidget(widget_8);

        widget_9 = new QWidget(widget_12);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        verticalLayout_7 = new QVBoxLayout(widget_9);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        dataLable_5 = new QLabel(widget_9);
        dataLable_5->setObjectName(QString::fromUtf8("dataLable_5"));
        dataLable_5->setFont(font6);
        dataLable_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(dataLable_5);

        weekLable_5 = new QLabel(widget_9);
        weekLable_5->setObjectName(QString::fromUtf8("weekLable_5"));
        weekLable_5->setFont(font5);
        weekLable_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(weekLable_5);

        weathLable_5 = new QLabel(widget_9);
        weathLable_5->setObjectName(QString::fromUtf8("weathLable_5"));
        weathLable_5->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_7->addWidget(weathLable_5);

        wNameLabe_5 = new QLabel(widget_9);
        wNameLabe_5->setObjectName(QString::fromUtf8("wNameLabe_5"));
        wNameLabe_5->setFont(font7);
        wNameLabe_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(wNameLabe_5);

        maxTemLable_5 = new QLabel(widget_9);
        maxTemLable_5->setObjectName(QString::fromUtf8("maxTemLable_5"));
        maxTemLable_5->setFont(font6);
        maxTemLable_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(maxTemLable_5);

        minTemLable_5 = new QLabel(widget_9);
        minTemLable_5->setObjectName(QString::fromUtf8("minTemLable_5"));
        minTemLable_5->setFont(font6);
        minTemLable_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(minTemLable_5);


        horizontalLayout_4->addWidget(widget_9);

        widget_10 = new QWidget(widget_12);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        verticalLayout_6 = new QVBoxLayout(widget_10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        dataLable_6 = new QLabel(widget_10);
        dataLable_6->setObjectName(QString::fromUtf8("dataLable_6"));
        dataLable_6->setFont(font6);
        dataLable_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(dataLable_6);

        weekLable_6 = new QLabel(widget_10);
        weekLable_6->setObjectName(QString::fromUtf8("weekLable_6"));
        weekLable_6->setFont(font5);
        weekLable_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(weekLable_6);

        weathLable_6 = new QLabel(widget_10);
        weathLable_6->setObjectName(QString::fromUtf8("weathLable_6"));
        weathLable_6->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_6->addWidget(weathLable_6);

        wNameLabe_6 = new QLabel(widget_10);
        wNameLabe_6->setObjectName(QString::fromUtf8("wNameLabe_6"));
        wNameLabe_6->setFont(font7);
        wNameLabe_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(wNameLabe_6);

        maxTemLable_6 = new QLabel(widget_10);
        maxTemLable_6->setObjectName(QString::fromUtf8("maxTemLable_6"));
        maxTemLable_6->setFont(font6);
        maxTemLable_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(maxTemLable_6);

        minTemLable_6 = new QLabel(widget_10);
        minTemLable_6->setObjectName(QString::fromUtf8("minTemLable_6"));
        minTemLable_6->setFont(font6);
        minTemLable_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(minTemLable_6);


        horizontalLayout_4->addWidget(widget_10);

        widget_11 = new QWidget(widget_12);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        verticalLayout_8 = new QVBoxLayout(widget_11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        dataLable_7 = new QLabel(widget_11);
        dataLable_7->setObjectName(QString::fromUtf8("dataLable_7"));
        dataLable_7->setFont(font6);
        dataLable_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(dataLable_7);

        weekLable_7 = new QLabel(widget_11);
        weekLable_7->setObjectName(QString::fromUtf8("weekLable_7"));
        weekLable_7->setFont(font5);
        weekLable_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(weekLable_7);

        weathLable_7 = new QLabel(widget_11);
        weathLable_7->setObjectName(QString::fromUtf8("weathLable_7"));
        weathLable_7->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_8->addWidget(weathLable_7);

        wNameLabe_7 = new QLabel(widget_11);
        wNameLabe_7->setObjectName(QString::fromUtf8("wNameLabe_7"));
        wNameLabe_7->setFont(font7);
        wNameLabe_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(wNameLabe_7);

        maxTemLable_7 = new QLabel(widget_11);
        maxTemLable_7->setObjectName(QString::fromUtf8("maxTemLable_7"));
        maxTemLable_7->setFont(font6);
        maxTemLable_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(maxTemLable_7);

        minTemLable_7 = new QLabel(widget_11);
        minTemLable_7->setObjectName(QString::fromUtf8("minTemLable_7"));
        minTemLable_7->setFont(font6);
        minTemLable_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(minTemLable_7);


        horizontalLayout_4->addWidget(widget_11);

        widget_13 = new QWidget(widget_12);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        verticalLayout_9 = new QVBoxLayout(widget_13);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        dataLable_8 = new QLabel(widget_13);
        dataLable_8->setObjectName(QString::fromUtf8("dataLable_8"));
        dataLable_8->setFont(font6);
        dataLable_8->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(dataLable_8);

        weekLable_8 = new QLabel(widget_13);
        weekLable_8->setObjectName(QString::fromUtf8("weekLable_8"));
        weekLable_8->setFont(font5);
        weekLable_8->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(weekLable_8);

        weathLable_8 = new QLabel(widget_13);
        weathLable_8->setObjectName(QString::fromUtf8("weathLable_8"));
        weathLable_8->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_9->addWidget(weathLable_8);

        wNameLabe_8 = new QLabel(widget_13);
        wNameLabe_8->setObjectName(QString::fromUtf8("wNameLabe_8"));
        wNameLabe_8->setFont(font7);
        wNameLabe_8->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(wNameLabe_8);

        maxTemLable_8 = new QLabel(widget_13);
        maxTemLable_8->setObjectName(QString::fromUtf8("maxTemLable_8"));
        maxTemLable_8->setFont(font6);
        maxTemLable_8->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(maxTemLable_8);

        minTemLable_8 = new QLabel(widget_13);
        minTemLable_8->setObjectName(QString::fromUtf8("minTemLable_8"));
        minTemLable_8->setFont(font6);
        minTemLable_8->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(minTemLable_8);


        horizontalLayout_4->addWidget(widget_13);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1029, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        findEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\237\216\345\270\202", nullptr));
        closeButton->setText(QString());
        findButton->setText(QString());
        nowWearhLabel->setText(QString());
        temLabel->setText(QCoreApplication::translate("MainWindow", "24\302\260C", nullptr));
        cityLable->setText(QCoreApplication::translate("MainWindow", "\345\237\216\345\270\202", nullptr));
        wNameLable->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        timeLable->setText(QCoreApplication::translate("MainWindow", "2024/5/9/16:37   \345\221\250\345\233\233", nullptr));
        temRangeLable->setText(QCoreApplication::translate("MainWindow", "1\302\260~3\302\260", nullptr));
        feelLable->setText(QCoreApplication::translate("MainWindow", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246\357\274\232", nullptr));
        wetLabel->setText(QCoreApplication::translate("MainWindow", "66%", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217\357\274\232", nullptr));
        airLabel->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        windLable->setText(QCoreApplication::translate("MainWindow", "\351\243\216\351\200\237\357\274\232", nullptr));
        windLevelLabel->setText(QCoreApplication::translate("MainWindow", "1\345\205\254\351\207\214", nullptr));
        dataLable_1->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weekLable_1->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weathLable_1->setText(QString());
        wNameLabe_1->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        maxTemLable->setText(QCoreApplication::translate("MainWindow", "29\302\260", nullptr));
        minTemLable_1->setText(QCoreApplication::translate("MainWindow", "22\302\260", nullptr));
        dataLable_2->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weekLable_2->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weathLable_2->setText(QString());
        wNameLabe_2->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        maxTemLable_2->setText(QCoreApplication::translate("MainWindow", "29\302\260", nullptr));
        minTemLable_2->setText(QCoreApplication::translate("MainWindow", "22\302\260", nullptr));
        weekLable_3->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        dataLable_3->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weathLable_3->setText(QString());
        wNameLabe_3->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        maxTemLable_3->setText(QCoreApplication::translate("MainWindow", "29\302\260", nullptr));
        minTemLable_3->setText(QCoreApplication::translate("MainWindow", "22\302\260", nullptr));
        dataLable_4->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weekLable_4->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weathLable_4->setText(QString());
        wNameLabe_4->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        maxTemLable_4->setText(QCoreApplication::translate("MainWindow", "29\302\260", nullptr));
        minTemLable_4->setText(QCoreApplication::translate("MainWindow", "22\302\260", nullptr));
        dataLable_5->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weekLable_5->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weathLable_5->setText(QString());
        wNameLabe_5->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        maxTemLable_5->setText(QCoreApplication::translate("MainWindow", "29\302\260", nullptr));
        minTemLable_5->setText(QCoreApplication::translate("MainWindow", "22\302\260", nullptr));
        dataLable_6->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weekLable_6->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weathLable_6->setText(QString());
        wNameLabe_6->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        maxTemLable_6->setText(QCoreApplication::translate("MainWindow", "29\302\260", nullptr));
        minTemLable_6->setText(QCoreApplication::translate("MainWindow", "22\302\260", nullptr));
        dataLable_7->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weekLable_7->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weathLable_7->setText(QString());
        wNameLabe_7->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        maxTemLable_7->setText(QCoreApplication::translate("MainWindow", "29\302\260", nullptr));
        minTemLable_7->setText(QCoreApplication::translate("MainWindow", "22\302\260", nullptr));
        dataLable_8->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weekLable_8->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        weathLable_8->setText(QString());
        wNameLabe_8->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        maxTemLable_8->setText(QCoreApplication::translate("MainWindow", "29\302\260", nullptr));
        minTemLable_8->setText(QCoreApplication::translate("MainWindow", "22\302\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
