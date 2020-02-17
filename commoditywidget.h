#ifndef COMMODITYWIDGET_H
#define COMMODITYWIDGET_H

#include <QWidget>

namespace Ui {
class CommodityWidget;
}

class CommodityWidget : public QWidget
{
    Q_OBJECT

public:
    friend class CommodityWidgetTest;
    explicit CommodityWidget(QWidget *parent = 0);
    ~CommodityWidget();
    double  costing() const;
    double  price() const;
    double  profit() const;
private:
    Ui::CommodityWidget *ui;
private slots:
    void showProfit();
    void on_line_price_textChanged(const QString &arg1);
    void on_line_costing_textChanged(const QString &arg1);
};

#endif // COMMODITYWIDGET_H
