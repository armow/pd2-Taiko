#include "form.h"
#include <QApplication>

Form * form;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    form = new Form();
    form->show();

    return a.exec();
}
