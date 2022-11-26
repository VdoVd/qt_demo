#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include <Qstring>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/0.png");//the position of your photo
    int w=ui->label_pic->width();
    int h=ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test"){
        QMessageBox::information(this,"Login","Username and password is correct");
        hide();
        sec=new secDialog(this);
        sec->show();
    }
    else
    {
        QMessageBox::warning(this,"Login","Username is not correct");
    }
}

