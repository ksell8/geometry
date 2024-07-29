#include "window.h"
#include "mathmind.h"

#include <QToolBar>
#include <QHBoxLayout>

Window::Window(QWidget *parent):
    QWidget(parent)
{
    MathMind *mathMind = new MathMind(this);
    QGridLayout *layout = new QGridLayout;
    QToolBar *toolbar = new QToolBar();
    layout->addWidget(mathMind);
    layout->addWidget(toolbar);
    setLayout(layout);
}


