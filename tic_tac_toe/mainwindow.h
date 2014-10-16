#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QPainter>
#include <QMessageBox>
#include <QMainWindow>
#include <QMouseEvent>
#include "common.h"

class Tictactoe;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:


    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QPoint point2pos(const QPoint& p) const;
    QPoint pos2point(const QPoint& p) const;

public slots:
    void mousePressEvent(QMouseEvent *event);
protected:
    void paintEvent(QPaintEvent *event);
private:
    void init();

    Tictactoe* _tictactoe;
};

#endif // MAINWINDOW_H
