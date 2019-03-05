#ifndef CONFIGUREDIALOG2_H
#define CONFIGUREDIALOG2_H

#include <QDialog>

#include "objectmgmt.h"

namespace Ui {
    class ConfigureDialog2;
}

class ConfigureDialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigureDialog2(QWidget *parent = 0);
    ~ConfigureDialog2();

signals:
    void finalAccept();

public:
    void setObjectMngr(ObjectMgmt* objectMngr);
    void partToConfig(QString partString, int listSize);

private slots:
    void on_nextButton_clicked();
    void on_cancelButton_clicked();
    void on_acceptConfig_clicked();

private:
    Ui::ConfigureDialog2 *ui;

    static int detCount;
    static int inletCount;
    static int colCount;
    static int partCount;
    static int injCount;

    void setupDetConfig(int count);
    void setupInletConfig(int count);
    void setupColumnConfig(int count);
    void setupInjConfig(int count);

    ObjectMgmt *m_objectMngr;

    QString m_partType;
    QString m_partName;
    QString m_partSubType;
    bool isPartHeated;
    int m_tempSlaveID;



};

#endif // CONFIGUREDIALOG2_H
