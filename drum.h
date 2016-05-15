#ifndef DRUM_H
#define DRUM_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QKeyEvent>
#include <QMediaPlayer>

class Drum :public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Drum();
    void keyPressEvent(QKeyEvent * event);

public slots:
    void move();

private:
    QMediaPlayer *correct;
    QMediaPlayer *wrong;

};

#endif // DRUM_H
