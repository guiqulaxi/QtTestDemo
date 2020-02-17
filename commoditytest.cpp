#include "commoditytest.h"
#include "commodity.h"
void CommodityTest::case1_serialNum()
{
    //测试编号
    Commodity c("beer_1", "啤酒", 4, 5);
    QVERIFY(c.serialNum() == "beer_1");
}
void CommodityTest::case2_name()
{
    //测试商品名称
    Commodity c("beer_1", "啤酒", 4, 5);
    QVERIFY(c.name() == "啤酒");
}
void CommodityTest::case3_consting()
{
    //测试商品成本
    Commodity c("beer_1", "啤酒", 4, 5);
    QVERIFY(c.consting() == 4);
}
void CommodityTest::case4_price()
{
    //测试商品价格
    Commodity c("beer_1", "啤酒", 4, 5);
    QVERIFY(c.price() == 5);
}
//在命令行中输入如下内容：case5_profit:int case5_profit:double
//可以只测试  case5_profit:int case5_profit:double

void CommodityTest::case5_profit()
{
    //测试利润 价格减去成本
    QFETCH(Commodity,commodity);
    QFETCH(double,result);
    QCOMPARE(commodity.profit(),result);
}
void CommodityTest::case5_profit_data()
{
    QTest::addColumn<Commodity>("commodity");
    QTest::addColumn<double>("result");
    QTest::newRow("int")<<Commodity("beer_1","啤酒",4.0,5.0)<<1.0;
    QTest::newRow("double")<<Commodity("beer_1","啤酒",4.0,6.5)<<2.5;
    QTest::newRow("negative")<<Commodity("beer_1","啤酒",4.0,2.0)<<-2.0;
}


