#pragma once

#include <QObject>
#include <QWidget>
#include <QTimer>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
class QTableWidget;
QT_END_NAMESPACE

class CWidStencilList : public QWidget
{
	Q_OBJECT

public:
	CWidStencilList(QWidget *parent);
	~CWidStencilList();

	void UpdateData();

protected:
	void InitData();
	void InitConnect();
	void TestData();

protected slots:

private:
	QWidget*							m_pParent;
	QTableWidget*						m_pTableWidget;
	// CStencilModel 
	// CStencilItemDelegate
};
