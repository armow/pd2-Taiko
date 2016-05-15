#ifndef DRUM_1_H
#define DRUM_1_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QKeyEvent>
#include <QMediaPlayer>

class Drum_1 :public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Drum_1();
    void keyPressEvent(QKeyEvent * event);

public slots:
    void move();

private:
    QMediaPlayer *correct;
    QMediaPlayer *wrong;

};

#endif // DRUM_1_H
