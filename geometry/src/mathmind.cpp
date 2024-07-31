//Copyright (C) 2024 Kurt Sell
#include "mathmind.h"
#include "graph.h"

#include <QDebug>
#include <QPainter>
#include <QPaintEvent>


MathMind::MathMind(Graph *graph, QWidget *parent):
    QWidget(parent),
    graph(graph)
{
    setMinimumSize(800,800);
}

MathMind::~MathMind(){
    delete graph;
}


void MathMind::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    graph->paint(&painter, event);
    painter.end();
}
