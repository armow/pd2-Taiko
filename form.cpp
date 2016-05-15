#include "form.h"
#include "ui_form.h"
#include "game.h"

Game *game;


Form::Form(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

}

Form::~Form()
{
    delete ui;
}


void Form::on_pushButton_2_clicked()
{
    close();
}

void Form::on_pushButton_clicked()
{
   this ->close();
   game = new Game();

}
