#ifndef COMMODITYWIDGETTEST_H
#define COMMODITYWIDGETTEST_H

#include <QtTest/QtTest>
#include <QObject>

class CommodityWidgetTest : public QObject
{
    Q_OBJECT
public:
    explicit CommodityWidgetTest(QObject *parent = nullptr);

signals:

public slots:
private slots:

    //成本
    void case1_gui_costing();
    //价格
    void case2_gui_price();
    //利润
    void case3_gui_profit();
    void case3_gui_profit_data();
};

#endif // COMMODITYWIDGETTEST_H
