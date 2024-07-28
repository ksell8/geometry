//Copyright (C) 2024 Kurt Sell
#include <QBrush>
#include <QPen>
#include <QWidget>


#ifndef GRAPH_H
#define GRAPH_H

class Graph
{
    public:
        Graph(int gridSpacing);
        void paint(QPainter *painter, QPaintEvent *event);

    private:
        QBrush background;
        QPen linePen;
        int gridSpacing;
};

#endif // GRAPH_H
