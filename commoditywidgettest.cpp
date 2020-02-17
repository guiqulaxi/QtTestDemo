#include "commoditywidgettest.h"
#include"commoditywidget.h"
#include "ui_commoditywidget.h"
CommodityWidgetTest::CommodityWidgetTest(QObject *parent) : QObject(parent)
{

}
void CommodityWidgetTest::case1_gui_costing()
{
    CommodityWidget w;
    //模拟按键，在键盘上输入成本 5.0
    QTest::keyClicks(w.ui->line_costing, "5.0");
    QCOMPARE(w.costing(), 5.0);
}
void CommodityWidgetTest::case2_gui_price()
{
    CommodityWidget w;
    //模拟按键，在键盘上输入价格 7.2
    QTest::keyClicks(w.ui->line_price, "7.2");
    QCOMPARE(w.price(), 7.2);
}
void CommodityWidgetTest::case3_gui_profit()
{
    QFETCH(QTestEventList, costing);
    QFETCH(QTestEventList, price);
    QFETCH(double, expected);


    CommodityWidget w;
    costing.simulate(w.ui->line_costing);
    price.simulate(w.ui->line_price);


    QCOMPARE(w.profit(), expected);
}


void CommodityWidgetTest::case3_gui_profit_data()
{
    QTest::addColumn<QTestEventList>("costing");
    QTest::addColumn<QTestEventList>("price");
    QTest::addColumn<double>("expected");


    QTestEventList costing1;
    QTestEventList price1;
    costing1.addKeyClicks("5.0");
    price1.addKeyClicks("7.2");
    QTest::newRow("normal") << costing1 << price1 << 2.2;


    QTestEventList costing2;
    QTestEventList price2;
    costing2.addKeyClicks("5.0");
    price2.addKeyClicks("3.2");
    QTest::newRow("negative") << costing2 << price2 << -1.8;
}
