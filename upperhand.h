#ifndef UPPERHAND_H
#define UPPERHAND_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QPropertyAnimation>
#include <QGraphicsItem>
#include "move_rec.h"

class upperhand: public Move_rec
{
    Q_OBJECT
public:
    upperhand(QWidget* parent = nullptr);
    void salute(int distance, int duration);
    void returnSalute(int distance, int duration);
protected:
    void paintEvent(QPaintEvent*) override;
};

#endif // UPPERHAND_H
