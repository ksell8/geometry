//Copyright (C) 2024 Kurt Sell
#ifndef MATHMIND_H
#define MATHMIND_H

#include <QWidget>


class Graph;
class MathMind : public QWidget
{
    Q_OBJECT

public:
    MathMind(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    Graph *graph;
};
#endif // MATHMIND_H
