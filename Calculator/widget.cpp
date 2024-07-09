#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    mode = new model;
    tmp = "";
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn_0_clicked()
{
    if(tmp != ""){
        tmp += ui->btn_0->text();
        ui->lcdNumber->display(tmp);
    }
}


void Widget::on_btn_dot_clicked()
{
    if(tmp != ""){
        tmp += ui->btn_dot->text();
        ui->lcdNumber->display(tmp);
    }
}


void Widget::on_btn_equal_clicked()
{
    bool ok;

    float num = tmp.toFloat(&ok);
    mode->setNum2(num);

    QString res = mode->doExpr();

    ui->lcdNumber->display(res);
    tmp = "";
}


void Widget::on_btn_1_clicked()
{
    tmp += ui->btn_1->text();
    ui->lcdNumber->display(tmp);
}


void Widget::on_btn_2_clicked()
{
    tmp += ui->btn_2->text();
    ui->lcdNumber->display(tmp);
}


void Widget::on_btn_3_clicked()
{
    tmp += ui->btn_3->text();
    ui->lcdNumber->display(tmp);
}


void Widget::on_btn_add_clicked()
{
    bool ok;

    float num = tmp.toFloat(&ok);
    mode->setNum1(num);
    tmp = "";

    QString ex = ui->btn_add->text();
    mode->setFlag(ex);
}


void Widget::on_btn_4_clicked()
{
    tmp += ui->btn_4->text();
    ui->lcdNumber->display(tmp);
}


void Widget::on_btn_5_clicked()
{
    tmp += ui->btn_5->text();
    ui->lcdNumber->display(tmp);
}


void Widget::on_btn_6_clicked()
{
    tmp += ui->btn_6->text();
    ui->lcdNumber->display(tmp);
}


void Widget::on_btn_sub_clicked()
{
    bool ok;

    float num = tmp.toFloat(&ok);
    mode->setNum1(num);
    tmp = "";

    QString ex = ui->btn_sub->text();
    mode->setFlag(ex);
}


void Widget::on_btn_7_clicked()
{
    tmp += ui->btn_7->text();
    ui->lcdNumber->display(tmp);
}


void Widget::on_btn_8_clicked()
{
    tmp += ui->btn_8->text();
    ui->lcdNumber->display(tmp);
}


void Widget::on_btn_9_clicked()
{
    tmp += ui->btn_9->text();
    ui->lcdNumber->display(tmp);
}


void Widget::on_btn_mul_clicked()
{
    bool ok;

    float num = tmp.toFloat(&ok);
    mode->setNum1(num);
    tmp = "";

    QString ex = ui->btn_mul->text();
    mode->setFlag(ex);
}


void Widget::on_btn_AC_clicked()
{
    mode->setNum1(0);
    mode->setNum2(0);
    mode->setFlag("");

    tmp = "";
    ui->lcdNumber->display(0);
}


void Widget::on_btn_CE_clicked()
{
    tmp = "";
    ui->lcdNumber->display(0);
}


void Widget::on_btn_delete_clicked()
{
    tmp.chop(1);

    if(tmp != ""){
        ui->lcdNumber->display(tmp);
    }else{
        ui->lcdNumber->display(0);
    }

}


void Widget::on_btn_div_clicked()
{
    bool ok;

    float num = tmp.toFloat(&ok);
    mode->setNum1(num);
    tmp = "";

    QString ex = ui->btn_div->text();
    mode->setFlag(ex);
}

