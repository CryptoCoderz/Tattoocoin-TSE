#include "aboutdialog.h"
#include "ui_aboutdialog.h"
#include "clientmodel.h"
#include "version.h"
#include "init.h"

#include "QPixmap"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    // display accurate about image
    QPixmap pix(":/images/about");
    this->ui->label_4->setPixmap(pix);
    if(fTCLNet)
    {
        QPixmap pix(":/images/about_le");
        this->ui->label_4->setPixmap(pix);
    }
}

void AboutDialog::setModel(ClientModel *model)
{
    if(model)
    {
        ui->versionLabel->setText(model->formatFullVersion());
    }
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::on_buttonBox_accepted()
{
    close();
}
