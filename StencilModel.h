#pragma once

#include <QObject>
#include <QWidget>
#include <QStandardItemModel>
#include <QVariant>
#include <QMap>

QT_BEGIN_NAMESPACE
class QTableWidget;
QT_END_NAMESPACE

class CStencilModel : public QStandardItemModel
{
	Q_OBJECT

public:

	enum EUserDataRoleBase
	{
		UDRB_NAME_TEXT_RECT_ROLE = Qt::UserRole,
		UDRB_NAME_TEXT_HOVER_ROLE,
		UDRB_CHECK_STAT_ROLE,
		UDRB_CHECK_BOX_RECT_ROLE,
	};

public:
	CStencilModel(QObject *parent);
	~CStencilModel();

	void SetTableWidget(QTableWidget* pTableWidget) { m_pTableWidget = pTableWidget; }
	void SetHorizontalHeaderLabels(const QStringList& lstHorHdrLabels);

protected:
	QMap<quint64, QVariant>		m_mapID2UserData;

private:
	QTableWidget*				m_pTableWidget;
	QStringList					m_lstHorHdrLabels;
};
