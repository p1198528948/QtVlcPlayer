#pragma once

#include <QObject>
#include <QPushButton>
#include <QItemDelegate>
#include <QCheckBox>

QT_BEGIN_NAMESPACE
class QTableWidget;
QT_END_NAMESPACE

class CStencilItemDelegate : public QItemDelegate
{
	Q_OBJECT

public:
	CStencilItemDelegate(QObject *parent);
	~CStencilItemDelegate();

	void SetTableWidget(QTableWidget* pTableWidget) { m_pTableWidget = pTableWidget; }

private:
	QTableWidget*				m_pTableWidget;
	bool						m_bShowToolTip;
};
