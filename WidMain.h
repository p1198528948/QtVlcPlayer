#ifndef WIDMAIN_H
#define WIDMAIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class CWidStencilList;
QT_END_NAMESPACE

namespace Ui {
class CWidMain;
}

class CWidMain : public QWidget
{
    Q_OBJECT

public:
    explicit CWidMain(QWidget *parent = nullptr);
    ~CWidMain();

private:
    Ui::CWidMain					*ui;
	CWidStencilList*				m_pWidStencilList;
};

#endif // WIDMAIN_H
