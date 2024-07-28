//Copyright (C) 2024 Kurt Sell
#include "mathmind.h"
#include "./ui_mathmind.h"
#include "graph.h"

#include <QPainter>
#include <QTimer>


MathMind::MathMind(Graph *graph, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MathMind)
    , graph(graph)
{
    ui->setupUi(this);
}

MathMind::~MathMind()
{
    delete ui;
}


void MathMind::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    graph->paint(&painter, event);
    painter.end();
}
