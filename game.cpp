#include "game.h"

Game::Game(QObject *parent)
    : QObject{parent}
{

}

void Game::draw() //Modify!!!
{
    QPainter painter;

    painter.setPen(QColor("#d4d4d4"));

    painter.setBrush(QBrush("#c56c00"));
    painter.drawRect(10, 15, 90, 60);

}
