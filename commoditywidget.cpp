#include "commoditywidget.h"
#include "ui_commoditywidget.h"

#include "commodity.h"
CommodityWidget::CommodityWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CommodityWidget)
{
    ui->setupUi(this);
}
CommodityWidget::~CommodityWidget()
{
    delete ui;
}
double CommodityWidget::costing() const
{
    return ui->line_costing->text().toDouble();
}
double CommodityWidget::price() const
{
    return ui->line_price->text().toDouble();
}
double CommodityWidget::profit() const
{
    return ui->line_profit->text().toDouble();
}
void CommodityWidget::showProfit()
{
    double c = costing();
    double p = price();
    Commodity commodity("beer_1", "啤酒", c, p);
    ui->line_profit->setText(QString::number(commodity.profit()));
}
void CommodityWidget::on_line_price_textChanged(const QString &arg1)
{
    showProfit();
}
void CommodityWidget::on_line_costing_textChanged(const QString &arg1)
{
    showProfit();
}
