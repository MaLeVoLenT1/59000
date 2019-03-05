#include "passworddialog.h"
#include "ui_passworddialog.h"

PasswordDialog::PasswordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PasswordDialog)
{
    ui->setupUi(this);

    connect(ui->cancelButton,SIGNAL(clicked()),this,SLOT(reject()));
}

PasswordDialog::~PasswordDialog()
{
    delete ui;
}

void PasswordDialog::on_OKButton_clicked()
{
    if (ui->passwordLineEdit->text()=="8100")//GOWMAC600
        this->accept();
    else
        this->reject();
}
