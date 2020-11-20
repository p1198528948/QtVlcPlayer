#ifndef WIDMAIN_H
#define WIDMAIN_H

#include <QWidget>

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
    Ui::CWidMain *ui;
};

#endif // WIDMAIN_H
