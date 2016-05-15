#include "myrect.h"
#include <QGraphicsScene>
#include "drum_1.h"
#include "drum.h"


void MyRect::spawn()
{
    int random = rand()%2+1;
    if(random==1){
        Drum *drum = new Drum();
        scene()->addItem(drum);

    }
    else{
        Drum_1 *drum_1 = new Drum_1();
        scene()->addItem(drum_1);

    }

}

