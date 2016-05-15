#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "myrect.h"
#include <QTimer>
#include "score.h"
#include <QImage>
#include <stdlib.h>
#include "time.h"
#include "drum.h"
#include "drum_1.h"
#include "end.h"
#include "game.h"
#include <QMediaPlayer>


Game::Game(QWidget *parent){

    scene = new QGraphicsScene();
    scene->setBackgroundBrush(QBrush(QImage(":/pic/game.png")));

    player =new MyRect();
    player->setRect(158,158,100,100);
    scene->addItem(player);

    score =new Score();
    score ->setPos(score->x()+650,score->y()+60);
    scene->addItem(score);

    time = new Time();
    time ->setPos(time->x()+350,time->y()+60);
    scene->addItem(time);


    QTimer *t =new QTimer();
    QObject::connect(t, SIGNAL(timeout()),this,SLOT(call()));
    t->start(1000);

    QGraphicsView *view = new QGraphicsView(scene);
    view->setFixedSize(913,653);
    scene->setSceneRect(0,0,910,650);
    view->show();

    QTimer *timer =new QTimer();
    QObject::connect(timer, SIGNAL(timeout()),player ,SLOT(spawn()));
    timer->start(1000);

    QMediaPlayer *music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/music/background.mp3"));
    music->play();
}

void Game::call()
{
    time->decrease();
}

