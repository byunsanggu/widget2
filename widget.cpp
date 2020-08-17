#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui-> pbCoffee->setEnabled(false);
    ui -> pbTea -> setEnabled(false);
    ui-> pbMilk -> setEnabled(false);




}

Widget::~Widget()
{
    delete ui;
}

int money = 0;




void Widget::on_pb10_clicked()
{
    money += 10;
      ui->lcdNumber->display(money);
      if(money >= 100){
          ui->pbCoffee->setEnabled(true);
          if(money >= 150)
          {
                ui->pbTea->setEnabled(true);

          if(money >= 200){
                          ui->pbMilk->setEnabled(true);
                      }
      }
      }
}

void Widget::on_pb50_clicked()
{
    money += 50;
        ui->lcdNumber->display(money);
        if(money >= 100){
            ui->pbCoffee->setEnabled(true);
            if(money >= 150)
            {
                  ui->pbTea->setEnabled(true);

            if(money >= 200){
                ui->pbMilk->setEnabled(true);
            }
        }

        }
}

void Widget::on_pb100_clicked()
{
    money += 100;
     ui->lcdNumber->display(money);
     if(money >= 100){
         ui->pbCoffee->setEnabled(true);
         if(money >= 150)
         {
               ui->pbTea->setEnabled(true);
         }
      if(money >= 200){
          ui->pbMilk->setEnabled(true);
      }
     }
}

void Widget::on_pb500_clicked()
{
    money += 500;
        ui->lcdNumber->display(money);
        if(money >= 100){
            ui->pbCoffee->setEnabled(true);
            if(money >= 150)
            {
                  ui->pbTea->setEnabled(true);
            }
            if(money >= 200){
                ui->pbMilk->setEnabled(true);
            }
        }

}

void Widget::on_pbCoffee_clicked()
{

    if(money <= 0 && money ==0)
    {
      money = 0;
      ui->pbMilk->setDisabled(true);
      ui->pbCoffee->setDisabled(true);
      ui->pbTea->setDisabled(true);
    }
    if(money <= 90)
    {
        printf("no money");
        ui->pbCoffee->setDisabled(true);

    }
    else
     {
        money -= 100;
        ui->lcdNumber->display(money);
    }

}

void Widget::on_pbTea_clicked()
{
    if(money <= 0)
    {
      money = 0;
      ui->pbMilk->setDisabled(true);
      ui->pbCoffee->setDisabled(true);
      ui->pbTea->setDisabled(true);
    }
    if(money <= 140)
    {
        printf("no money");

        ui->pbTea->setDisabled(true);
    }
    else
    {
    money -= 150;
    ui->lcdNumber->display(money);

}
}

void Widget::on_pbMilk_clicked()
{
    if(money <= 0)
    {
        ui->pbMilk->setDisabled(true);
        ui->pbCoffee->setDisabled(true);
        ui->pbTea->setDisabled(true);
        money =0;

     }if(money <= 190)
     {
        ui->pbMilk->setDisabled(true);
         printf("no money");
     }

        else
        {
        money -= 200;
        ui->lcdNumber->display(money);
    }
 }


void Widget::on_pbReset_clicked()
{

    money = 0;
    QMessageBox m;
     ui->pbMilk->setDisabled(true);
     ui->pbCoffee->setDisabled(true);
     ui->pbTea->setDisabled(true);
    ui->lcdNumber->display(money = 0);
    m.information(nullptr,"money","no money");

}
