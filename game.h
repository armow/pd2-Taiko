#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include "time.h"
#include "score.h"
#include "myrect.h"
#include <QGraphicsView>

class Game:public QGraphicsView{
    Q_OBJECT

public:
    Game(QWidget *parent=0);
    QGraphicsScene *scene;
    Score *score;
    MyRect *player;
    Time *time;

public slots:
    void call();

};


#endif // GAME_H
