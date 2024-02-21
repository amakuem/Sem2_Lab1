#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "move_rec.h"
#include "soldier.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Rectungle = new Move_rec(this);
    //Rectungle -> move(430, 390);
    sold =new soldier(this);
    uphand = new upperhand(this);
    uphand -> move(430, 490);
    sold -> move(430, 290);
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
    sold -> left(50, 500);
    uphand -> left(50, 500);
}



void MainWindow::on_pushButton_2_clicked()
{
    sold -> right(50, 500);
    uphand -> right(50, 500);
}


void MainWindow::on_pushButton_3_clicked()
{
    uphand -> salute(100, 10000);
    uphand -> returnSalute(100, 1000);
}

