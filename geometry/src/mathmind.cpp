//Copyright (C) 2024 Kurt Sell
#include "mathmind.h"
#include "graph.h"

#include <QDebug>
#include <QPainter>


MathMind::MathMind(Graph *graph, QWidget *parent)
    : graph(graph), QWidget(parent)
{
}



void MathMind::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    graph->paint(&painter, event);
    painter.end();
}
