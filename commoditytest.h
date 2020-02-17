#ifndef COMMODITYTEST_H
#define COMMODITYTEST_H
#include <QtTest/QtTest>
#include <QObject>

class CommodityTest : public QObject
{
    Q_OBJECT
public:


signals:

public slots:
private slots:
    void case1_serialNum();
    void case2_name();
    void case3_consting();
    void case4_price();
    void case5_profit();
    void case5_profit_data();


};

#endif // COMMODITYTEST_H
