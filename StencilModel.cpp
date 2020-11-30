#include "StencilModel.h"

bool g_bUserSortFun_UnpackList = true;

CStencilModel::CStencilModel(QObject *parent)
	: QStandardItemModel(parent)
{
}

CStencilModel::~CStencilModel()
{
}

void CStencilModel::SetHorizontalHeaderLabels(const QStringList& lstHorHdrLabels)
{
	m_lstHorHdrLabels = lstHorHdrLabels;
	setHorizontalHeaderLabels(lstHorHdrLabels);
}