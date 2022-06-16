#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QPainter>

class Game : public QObject
{
    Q_OBJECT
public:
    explicit Game(QObject *parent = nullptr);
    Q_INVOKABLE void draw();

signals:

};

#endif // GAME_H
