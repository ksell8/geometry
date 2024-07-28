#ifndef MATHMIND_H
#define MATHMIND_H

#include <QMainWindow>
#include "graph.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MathMind;
}
QT_END_NAMESPACE

class Helper;
class MathMind : public QMainWindow
{
    Q_OBJECT

public:
    MathMind(Graph *graph, QWidget *parent = nullptr);
    ~MathMind();

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::MathMind *ui;
    Graph *graph;
};
#endif // MATHMIND_H
