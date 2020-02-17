#include "commodity.h"

Commodity::Commodity(const string &serialNum,
                     const string &name,
                     double consting,
                     double price)
{
    m_serialNum = serialNum;
    m_name = name;
    m_consting = consting;
    setPrice(price);
}
string Commodity::serialNum() const
{
    return m_serialNum;
}
string Commodity::name() const
{
    return m_name;
}
double Commodity::consting() const
{
    return m_consting;
}
double Commodity::price() const
{
    return m_price;
}
void Commodity::setPrice(double price)
{
    m_price = price;
}
double Commodity::profit() const
{
    return price()-consting();
}
