//Copyright (C) 2024 Kurt Sell
#include "graph.h"
#include "mathmind.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "geometry_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    Graph graph = Graph(20);
    MathMind w = MathMind(&graph);
    w.show();
    return a.exec();
}
