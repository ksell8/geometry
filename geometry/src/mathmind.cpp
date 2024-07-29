//Copyright (C) 2024 Kurt Sell
#include "mathmind.h"
#include "graph.h"

#include <QDebug>
#include <QPainter>
#include <QPaintEvent>


MathMind::MathMind(QWidget *parent)
{
    parent = parent;
    setMinimumSize(800,800);
    graph = new Graph(20);
}



void MathMind::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    graph->paint(&painter, event);
    painter.end();
}
