#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QGraphicsRectItem>
#include <QPropertyAnimation>
#include <QKeyEvent>
#include <move_rec.h>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Move_rec *Rectungle;
protected:
    void paintEvent(QPaintEvent*) override;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};






#endif // MAINWINDOW_H
