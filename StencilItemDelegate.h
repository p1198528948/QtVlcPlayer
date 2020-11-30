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

protected:
	void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
	QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const;
	QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
	void setEditorData(QWidget *editor, const QModelIndex &index) const;
	void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;
	bool editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index);

private:
	QTableWidget*				m_pTableWidget;
	bool						m_bShowToolTip;
};
