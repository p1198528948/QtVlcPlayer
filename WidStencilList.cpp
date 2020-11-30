#include "WidStencilList.h"
#include <QVBoxLayout>
#include <QTableWidget>

CWidStencilList::CWidStencilList(QWidget *parent)
	: QWidget(parent)
{
	m_pParent = parent;

	InitData();
	InitConnect();
}

CWidStencilList::~CWidStencilList()
{
}

void CWidStencilList::UpdateData()
{

}

void CWidStencilList::InitData()
{
	// Size Policy
	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

	// 主垂直布局器
	QVBoxLayout* pMainLayout = new QVBoxLayout(this);
	pMainLayout->setContentsMargins(0, 0, 0, 0);
	pMainLayout->setSpacing(0);

	// TableWidget
	m_pTableWidget = new QTableWidget(this);
	pMainLayout->addWidget(m_pTableWidget);

	// 数据刷新
	UpdateData();
}

void CWidStencilList::InitConnect()
{

}

void CWidStencilList::TestData()
{

}