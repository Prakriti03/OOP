#include "homepage.h"
#include "ui_homepage.h"
#include "sellproduct.h"

homepage::homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homepage)
{
    ui->setupUi(this);
}

homepage::~homepage()
{
    delete ui;
}

void homepage::on_pushButton_clicked()
{
    sellproduct sell;
    //sell.setModal(true);
    sell.exec();
}

