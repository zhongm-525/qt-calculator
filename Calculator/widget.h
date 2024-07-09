#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include "model.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btn_0_clicked();

    void on_btn_dot_clicked();

    void on_btn_equal_clicked();

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_add_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_sub_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_mul_clicked();

    void on_btn_AC_clicked();

    void on_btn_CE_clicked();

    void on_btn_delete_clicked();

    void on_btn_div_clicked();

private:
    QString tmp;

    Ui::Widget *ui;
    model *mode;
};
#endif // WIDGET_H
