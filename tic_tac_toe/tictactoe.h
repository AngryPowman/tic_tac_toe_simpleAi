#ifndef TICTACTOE_H
#define TICTACTOE_H

class TictactoeView;
class TictactoeModel;

class Tictactoe
{
public:
    Tictactoe(QObject* object);
    virtual ~Tictactoe();

public:
    bool initialize();
    void destroy();

public:
    TictactoeModel* model();
    TictactoeView* view();

private:
    QObject* _object;
    TictactoeModel* _model;
    TictactoeView* _view;
};

#endif // TICTACTOE_H
