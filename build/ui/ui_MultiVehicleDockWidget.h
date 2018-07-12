/********************************************************************************
** Form generated from reading UI file 'MultiVehicleDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIVEHICLEDOCKWIDGET_H
#define UI_MULTIVEHICLEDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiVehicleDockWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *MultiVehicleDockWidget)
    {
        if (MultiVehicleDockWidget->objectName().isEmpty())
            MultiVehicleDockWidget->setObjectName(QStringLiteral("MultiVehicleDockWidget"));
        MultiVehicleDockWidget->resize(200, 300);
        horizontalLayout = new QHBoxLayout(MultiVehicleDockWidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stackedWidget = new QStackedWidget(MultiVehicleDockWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(MultiVehicleDockWidget);

        QMetaObject::connectSlotsByName(MultiVehicleDockWidget);
    } // setupUi

    void retranslateUi(QWidget *MultiVehicleDockWidget)
    {
        MultiVehicleDockWidget->setWindowTitle(QApplication::translate("MultiVehicleDockWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MultiVehicleDockWidget: public Ui_MultiVehicleDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIVEHICLEDOCKWIDGET_H
