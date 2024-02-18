#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "move_rec.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Rectungle = new Move_rec(this);
    Rectungle -> move(430, 390);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *){
    QPainter painter(this);
}

void MainWindow::on_pushButton_clicked()
{
    Rectungle -> left(50, 500);
}



void MainWindow::on_pushButton_2_clicked()
{
    Rectungle -> right(50, 500);
}

