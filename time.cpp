#include "time.h"
#include <QFont>
#include <QTimer>
#include <QGraphicsScene>
#include "game.h"

extern Game *game;

Time::Time(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    count=30;

    setPlainText(QString("Time : ") + QString::number(count));
    setDefaultTextColor(Qt::green);
    setFont(QFont("times",48));

}

void Time::decrease(){
    count--;
    setPlainText(QString("Time : ") + QString::number(count));
    if(count==0){
        game->close();
        End *end = new End();
        end->show();
    }
}

