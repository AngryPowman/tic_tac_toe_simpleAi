#ifndef DEF_H
#define DEF_H
static const int MAX_SIZE = 3;
static const int PLAYER_NONE = 0;
static const int PLAYER_H = 1;
static const int PLAYER_C = 2;
static const int COLOR_NONE = 0;
static const int COLOR_W = 1;
static const int COLOR_B = 2;
static const int AI_ACT = 10000;
static const int AI_DEF = 1000;
static const int AI_H_O = 100;
static const int AI_C_O = 10;
static const int AI_N = 0;

enum State
{
    STATE_WAIT = 0,
    STATE_PLAY = 1,
    STATE_HOLD = 2,
};
#endif // DEF_H
