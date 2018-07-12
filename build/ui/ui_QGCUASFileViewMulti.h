/********************************************************************************
** Form generated from reading UI file 'QGCUASFileViewMulti.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCUASFILEVIEWMULTI_H
#define UI_QGCUASFILEVIEWMULTI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCUASFileViewMulti
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *QGCUASFileViewMulti)
    {
        if (QGCUASFileViewMulti->objectName().isEmpty())
            QGCUASFileViewMulti->setObjectName(QStringLiteral("QGCUASFileViewMulti"));
        QGCUASFileViewMulti->resize(200, 300);
        horizontalLayout = new QHBoxLayout(QGCUASFileViewMulti);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stackedWidget = new QStackedWidget(QGCUASFileViewMulti);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(QGCUASFileViewMulti);

        QMetaObject::connectSlotsByName(QGCUASFileViewMulti);
    } // setupUi

    void retranslateUi(QWidget *QGCUASFileViewMulti)
    {
        QGCUASFileViewMulti->setWindowTitle(QApplication::translate("QGCUASFileViewMulti", "Onboard Files", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCUASFileViewMulti: public Ui_QGCUASFileViewMulti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCUASFILEVIEWMULTI_H
