#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/rec/img/close-file.png"),"Mark");
    ui->comboBox->addItem(QIcon(":/rec/img/new-file.png"),"Jhon");
    ui->comboBox->addItem(QIcon(":/rec/img/open-folder.webp"),"July");
    for(int i=0;i<10;i++){
        ui->comboBox->addItem(QIcon(":/rec/img/close-file.png"),QString::number(i)+"name");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked(){
    QMessageBox::information(this,"title",ui->comboBox->currentText());
}

