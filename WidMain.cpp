#include "WidMain.h"
#include "ui_WidMain.h"

CWidMain::CWidMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CWidMain)
{
    ui->setupUi(this);
}

CWidMain::~CWidMain()
{
    delete ui;
}
