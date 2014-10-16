#include "tictactoe_view.h"
#include <QMainWindow>
#include <QPainter>
#include "common.h"

TictactoeView::TictactoeView(QMainWindow* window)
    : _mainWindow(NULL)
{
    _mainWindow = window;
    _brush.setStyle(Qt::SolidPattern);
}

TictactoeView::TictactoeView()
{

}

void TictactoeView::drawChessBoard()
{
    QPainter p(_mainWindow);
    for(int i = 0; i <= MAX_SIZE; ++i)
    {
        p.drawLine(10 + i * 100, 10, 10 + i * 100, 310);
        p.drawLine(10, 10 + i * 100, 310, 10 + i * 100);
    }
}

void TictactoeView::setBrushColor(int color)
{
    _brush.setColor(color);
}

