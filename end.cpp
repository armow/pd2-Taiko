#include "end.h"
#include "ui_end.h"
#include <QGraphicsScene>
#include <QApplication>
#include "game.h"

extern Game *game;

End::End(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::End)
{
    ui->setupUi(this);
    value=game->score->getScore();
    ui->score->setText(QString::number(value));

}

End::~End()
{
    delete ui;
}

void End::on_pushButton_clicked()
{
    close();
    game = new Game();
}

void End::on_pushButton_2_clicked()
{
    QApplication::quit();
}
