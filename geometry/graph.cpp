#include "graph.h"

#include <QPainter>
#include <QPaintEvent>
//Copyright (C) 2024 Kurt Sell
#include <QWidget>

Graph::Graph(int gridSpacing)
    : background(Qt::white),
    gridSpacing(gridSpacing),
    linePen(Qt::black)
{
    linePen.setWidth(1);
}

void Graph::paint(QPainter *painter, QPaintEvent *event){
    painter->fillRect(event->rect(), background);

    // Set up the pen for drawing lines
    painter->setPen(linePen);

    // Draw horizontal lines every 5 pixels
    for (int y = 0; y < event->rect().height(); y += gridSpacing) {
        painter->drawLine(0, y, event->rect().width(), y);
    }

    // Draw vertical lines every 5 pixels
    for (int x = 0; x < event->rect().width(); x += gridSpacing) {
        painter->drawLine(x, 0, x, event->rect().height());
    }
}
