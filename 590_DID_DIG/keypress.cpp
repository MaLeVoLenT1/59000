/*
 * keypress.cpp
 *
 *  Created on: Jun 16, 2014
 *      Author: emac1
 */

#include "keypress.h"

#include <QApplication>
#include <QKeyEvent>
#include <QDebug>

KeyPress::KeyPress(QWidget *parent) :
    QWidget(parent)
{
    myLabel = new QLabel("LABEL");
    mainLayout = new QVBoxLayout;
    mainLayout->addWidget(myLabel);
    setLayout(mainLayout);

}

void KeyPress::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_F1)
    {
    	qDebug() << "Pressed F1 Key";
//    	myLabel->setText("You pressed ESC");
    }
}

void KeyPress::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_F1)
    {
    	qDebug() << "Released F1 Key";
//    	myLabel->setText("You released ESC");
    }
}
/*#include <QtGui>
#include "keypress.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    KeyPress *keyPress = new KeyPress();
    keyPress->show();

    return a.exec();
}*/

