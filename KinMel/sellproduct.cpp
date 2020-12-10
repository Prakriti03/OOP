#include "sellproduct.h"
#include "ui_sellproduct.h"
#include<QMessageBox>
#include<QTextStream>
#include<QFile>

sellproduct::sellproduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sellproduct)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Apparels & Accessories");
    ui->comboBox->addItem("Automobiles");
    ui->comboBox->addItem("Beauty & Health");
    ui->comboBox->addItem("Books & Learning");
    ui->comboBox->addItem("Computer & Peripherals");
    ui->comboBox->addItem("Electronics");
    ui->comboBox->addItem("Garments");
    ui->comboBox->addItem("Home,Furnishing & Appliances");
    ui->comboBox->addItem("Music Instruments");
    ui->comboBox->addItem("Pets & Pet Care");
    ui->comboBox->addItem("Real Estate");
    ui->comboBox->addItem("Sports and Fitness");
    ui->comboBox->addItem("Toys and Video Games");


}

sellproduct::~sellproduct()
{
    delete ui;
}


void sellproduct::on_pushButton_clicked()
{
    QString p_name=ui->lineEdit->text();
    QString p_description=ui->lineEdit_2->text();
    QString p_category=ui->comboBox->currentText();
    if(p_name==NULL || p_description==NULL)
        QMessageBox::warning(this,"title","Fill in the * blanks");




}
