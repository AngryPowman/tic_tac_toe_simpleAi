#ifndef TICTACTOE_MODEL_H
#define TICTACTOE_MODEL_H

#include <QPoint>
#include "common.h"
#include "mvc.h"

class Tictactoe;

template <typename T>
class TictactoeModel : BaseMVC<T>
{
public:
    TictactoeModel::TictactoeModel(T* mvc)
        : player(PLAYER_NONE), _state(State::STATE_HOLD), MVC<T>(mvc)
    {
    }

    virtual ~TictactoeModel();

public:
    bool init();
    bool updateChessData();
    void addPoint(const QPoint& p);
    void changeState();
    void changePlayer();
    int check();
    QPoint AI_check();

public:
    State getState();

private:
    int PLAYER_H_COLOR;
    int PLAYER_C_COLOR;
    State _state;
    int player;
    int map[MAX_SIZE][MAX_SIZE];
    int AI_HOW[MAX_SIZE][MAX_SIZE];
    int AI_CALC[MAX_SIZE][MAX_SIZE];
};

#endif // TICTACTOE_MODEL_H
