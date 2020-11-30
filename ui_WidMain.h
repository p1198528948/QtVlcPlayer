/********************************************************************************
** Form generated from reading UI file 'WidMain.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDMAIN_H
#define UI_WIDMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CWidMain
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *pVBoxLayout;

    void setupUi(QWidget *CWidMain)
    {
        if (CWidMain->objectName().isEmpty())
            CWidMain->setObjectName(QString::fromUtf8("CWidMain"));
        CWidMain->resize(509, 390);
        verticalLayout_2 = new QVBoxLayout(CWidMain);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pVBoxLayout = new QVBoxLayout();
        pVBoxLayout->setSpacing(0);
        pVBoxLayout->setObjectName(QString::fromUtf8("pVBoxLayout"));

        verticalLayout_2->addLayout(pVBoxLayout);


        retranslateUi(CWidMain);

        QMetaObject::connectSlotsByName(CWidMain);
    } // setupUi

    void retranslateUi(QWidget *CWidMain)
    {
        CWidMain->setWindowTitle(QCoreApplication::translate("CWidMain", "CWidMain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CWidMain: public Ui_CWidMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDMAIN_H
