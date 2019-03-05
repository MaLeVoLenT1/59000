#ifndef CONFIGUREDIALOG_H
#define CONFIGUREDIALOG_H

#include <QDialog>
#include <QStringListModel>

#include "objectmgmt.h"

namespace Ui {
    class ConfigureDialog;
}

class ConfigureDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigureDialog(QWidget *parent = 0);
    ~ConfigureDialog();

    void setObjectMngr(ObjectMgmt* objectMngr);

signals:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();
    void on_addDetector_clicked();
    void on_deleteDetector_clicked();
    void on_addInlet_clicked();
    void on_deleteInlet_clicked();
    void on_addColumn_clicked();
    void on_deleteColumn_clicked();
    void on_addInjector_clicked();
    void on_deleteInjector_clicked();

private:
    Ui::ConfigureDialog *ui;

    bool somethingChanged;

    void configureParts(QStringList configList, ObjectMgmt* objectMngr);

    QStringListModel *partNameModel;

    ObjectMgmt *m_objectMngr;

    QStringList m_detNameList;
    QStringList m_injNameList;
    QStringList m_inletNameList;
    QStringList m_colNameList;

    int m_detCount;
    int m_injCount;
    int m_inletCount;
    int m_colCount;

    QStringList m_partsList;
};

#endif // CONFIGUREDIALOG_H
