#include "mainwindow.h"
#include "common.h"
#include "tictactoe.h"
#include "tictactoe_view.h"
#include "tictactoe_model.h"

#define DEBUG

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), _tictactoe(NULL)
{

    resize(480,320);
    this->setWindowTitle("泡面大战王文璐");

    _tictactoe->initialize();

    init();
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent* pevent)
{
    //QPainter p(this);
    //for(int i = 0; i <= MAX_SIZE; ++i)
    //{
    //    p.drawLine(10 + i * 100, 10, 10 + i * 100, 310);
     //   p.drawLine(10, 10 + i * 100, 310, 10 + i * 100);
    //}

    _tictactoe->view()->drawChessBoard();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    QPoint p = event->pos();
    State state = _tictactoe->model()->getState();

    if(state == STATE_PLAY)
    {
        _tictactoe->model()->addPoint(pos2point(p));
    }

    p = _tictactoe->model()->AI_check();
    if(p.x() != -1 && p.y() != -1 && state == STATE_WAIT) _tictactoe->model()->addPoint(p);
}

QPoint MainWindow::point2pos(const QPoint& p) const
{
    return QPoint(10 + p.x() * 100 + 50, 10 + p.y() * 100 + 50);
}

QPoint MainWindow::pos2point(const QPoint& p) const
{
    return QPoint((p.x() - 10) / 100, (p.y() - 10) / 100);
}

