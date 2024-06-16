#include "widget.h"
#include "ui_widget.h"
#include "QString"
#include "QByteArray"
#include "QDebug"
#include "iostream"
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QString str = "123214";
    QByteArray by;
    by.append(str);
    char name[12];
    strcpy(name,by);
    cout<<name<<endl;
}

Widget::~Widget()
{
    delete ui;
}

