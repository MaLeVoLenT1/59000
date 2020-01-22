#include "mainwindow.h"
#include "main.h"
#include <QApplication>
#include <QSplashScreen>
#include <QWSServer>

class I : public QThread { public:
   static void sleep(unsigned long secs) { QThread::sleep(secs); }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWSServer::setCursorVisible( false );

    QPixmap pixmap(SPLASH_IMAGE);
    QFont font("SansSerif", 20);
    QSplashScreen *splash = new QSplashScreen(pixmap);
    MainWindow w;

    splash->showMessage((QString("Version: %1.%2.%3").arg(VERSION_MAJOR).arg(VERSION_MINOR).arg(VERSION_BUILD)),Qt::AlignHCenter | Qt::AlignTop);
    splash->setFont(font);
    splash->show();

    I::sleep(2);
    w.showMaximized();
    splash->finish(&w);
    delete splash;
    return a.exec();
}




