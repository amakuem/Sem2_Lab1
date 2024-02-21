#include "upperhand.h"

upperhand::upperhand(QWidget *parent): Move_rec(parent) {
    setFixedSize(50,120);
}
void upperhand::paintEvent(QPaintEvent *){
    QPainter painter(this);
    painter.setPen(Qt::black);
    painter.setBrush(Qt::black);
    painter.drawRect(0, 0, 100, 300);
}

void upperhand::salute(int distance, int duration){
    //QPropertyAnimation *animation = new QPropertyAnimation(this, "hand");
    QPropertyAnimation *animation = new QPropertyAnimation(this, "pos");
    animation->setDuration(duration);
    animation->setEndValue(QPointF(x(), y() - distance));
    animation->start(QAbstractAnimation::DeleteWhenStopped);

    animation->setEasingCurve(QEasingCurve::InOutQuad);

    //QPropertyAnimation *returnRect = new QPropertyAnimation(this, "pos");
    //returnRect -> setDuration(duration);
    //returnRect -> setStartValue(QPointF());
    //returnRect -> setEndValue(QPointF(x(), y() + distance));
    animation->start(QAbstractAnimation::DeleteWhenStopped);
}

void upperhand::returnSalute(int distance, int duration){
    QPropertyAnimation *animation = new QPropertyAnimation(this, "pos");
    animation->setDuration(duration);
    animation->setEndValue(QPointF(x(), y() + distance));
    animation->start(QAbstractAnimation::DeleteWhenStopped);
    animation->setEasingCurve(QEasingCurve::InOutQuad);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
}
