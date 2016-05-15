#include "drum_1.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include "game.h"
#include <QMediaPlayer>

extern Game *game;


Drum_1::Drum_1() : QObject(),QGraphicsPixmapItem() {

    setPos(900,180);

    setPixmap(QPixmap(":/drum/2.png"));

    QTimer *timer =new QTimer(this);
    connect(timer, SIGNAL(timeout()),this ,SLOT(move()));
    timer ->start(15);

    setFlag(QGraphicsItem::ItemIsFocusable);

    correct = new QMediaPlayer();
    correct->setMedia(QUrl("qrc:/music/correct.mp3"));

    wrong = new QMediaPlayer();
    wrong->setMedia(QUrl("qrc:/music/wrong.mp3"));


}

void Drum_1::move(){
    if(pos().x()<=250)
        setFocus();
    if(pos().x()<=150)
        clearFocus();

    setPos(x()-5,y());

    if(pos().x()<140){
        scene()->removeItem(this);
        delete this;
    }
}

void Drum_1::keyPressEvent(QKeyEvent * event)
{
    if(event->key() == Qt::Key_Z){
        game->score->increase();

        if(correct->state()==QMediaPlayer::PlayingState){
            correct->setPosition(0);
        }
        else if(correct->state()==QMediaPlayer::StoppedState){
            correct->play();
        }

        scene()->removeItem(this);
        delete this;
        return;
    }
    else if(event->key() == Qt::Key_X){
        game->score->decrease();

        if(wrong->state()==QMediaPlayer::PlayingState){
            wrong->setPosition(0);
        }
        else if(wrong->state()==QMediaPlayer::StoppedState){
            wrong->play();
        }

        return;

    }
}
