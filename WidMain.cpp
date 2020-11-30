#include "WidMain.h"
#include "ui_WidMain.h"
#include "WidStencilList.h"

CWidMain::CWidMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CWidMain)
{
    ui->setupUi(this);

	m_pWidStencilList = new CWidStencilList(this);
	ui->pVBoxLayout->addWidget(m_pWidStencilList);
}

CWidMain::~CWidMain()
{
    delete ui;
}
