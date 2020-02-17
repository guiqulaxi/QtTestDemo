#ifndef COMMODITY_H
#define COMMODITY_H
#include <string>
#include <QMetaType>
using std::string;


class Commodity
{
public:
    Commodity(){};
    Commodity(const string& serialNum,
              const string& name,
              double consting,
              double price);
    //获取商品编号
    string serialNum() const;
    //获取商品名称
    string name() const;
    //获取商品成本
    double consting() const;
    //获取商品价格
    double price() const;
    //修改商品价格
    void setPrice(double price);
    //获取单个商品利润
    double profit() const;
private:
    string m_serialNum;//商品编号
    string m_name;     //商品名称
    double m_consting; //商品成本
    double m_price;    //商品价格
};
Q_DECLARE_METATYPE(Commodity)
#endif // COMMODITY_H
