#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QDateTime>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("串口号获取工具1.0");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_pressed()
{
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss");
    ui->textBrowser->append(current_date);
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        ui->textBrowser->append(info.portName()+"\t"+info.description());
    }
    ui->textBrowser->append("");
}

void Widget::on_pushButton_2_pressed()
{
    ui->textBrowser->clear();
}
