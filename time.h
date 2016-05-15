#ifndef TIME_H
#define TIME_H

#include "end.h"
#include <QGraphicsTextItem>

class Time:public QGraphicsTextItem{
public:
    Time(QGraphicsItem *parent=0);
    void decrease();
    End *end;

private:
    int count;


};

#endif // TIME_H
