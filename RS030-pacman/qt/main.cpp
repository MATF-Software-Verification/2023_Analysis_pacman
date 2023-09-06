#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QScreen>
#include <QDebug>


#include "wall.h"
#include "pacmangame.h"
//#include "globalVariables.h"
#include <iostream>
#include "game.h"
#include <QFile>
#include <QTextStream>
#include <algorithm>
#include <string>
//using namespace global;



#include "extern_variables.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    initializeVariables();

    game->show();
    game->displayMainManu();


    return a.exec();
}
