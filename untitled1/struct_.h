#ifndef STRUCT__H
#define STRUCT__H
#include<QString>
class upLeft{
public:
    QString time;
    QString feel;
    QString ganmao;
    QString tem;
    QString minTem;
    QString MaxTem;
    QString city;
    QString wName;
    QString week;
    upLeft() = default;
    ~upLeft() = default;
};

class upRight{
public:
    QString wet;
    QString air;
    QString windA;
    QString windL;
    QString PM;
};

class down{
public:
    QString week;
    QString date;
    QString wName;
    QString minTem;
    QString maxTem;
    QString windA;
    QString windL;
};

#endif // STRUCT__H
