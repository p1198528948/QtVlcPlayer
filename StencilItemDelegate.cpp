#include "StencilItemDelegate.h"

CStencilItemDelegate::CStencilItemDelegate(QObject *parent)
	: QItemDelegate(parent)
{
	m_pTableWidget = nullptr;
}

CStencilItemDelegate::~CStencilItemDelegate()
{
}
