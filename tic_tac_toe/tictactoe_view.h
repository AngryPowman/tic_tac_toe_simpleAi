#ifndef TICTACTOEVIEW_H
#define TICTACTOEVIEW_H

class QMainWindow;

template <typename T>
class TictactoeView : BaseMVC<T>
{
public:
    TictactoeView(QMainWindow* window);
    virtual TictactoeView();

public:
    void drawChessBoard();
    void setBrushColor(int color);

private:
    QMainWindow* _mainWindow;
    QBrush _brush;
};

#endif // TICTACTOEVIEW_H
