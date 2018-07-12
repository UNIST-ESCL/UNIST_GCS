/********************************************************************************
** Form generated from reading UI file 'QGCQmlWidgetHolder.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCQMLWIDGETHOLDER_H
#define UI_QGCQMLWIDGETHOLDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QGCQuickWidget.h"
#include "QQuickWidget"

QT_BEGIN_NAMESPACE

class Ui_QGCQmlWidgetHolder
{
public:
    QVBoxLayout *verticalLayout;
    QGCQuickWidget *qmlWidget;

    void setupUi(QWidget *QGCQmlWidgetHolder)
    {
        if (QGCQmlWidgetHolder->objectName().isEmpty())
            QGCQmlWidgetHolder->setObjectName(QStringLiteral("QGCQmlWidgetHolder"));
        QGCQmlWidgetHolder->resize(400, 300);
        verticalLayout = new QVBoxLayout(QGCQmlWidgetHolder);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        qmlWidget = new QGCQuickWidget(QGCQmlWidgetHolder);
        qmlWidget->setObjectName(QStringLiteral("qmlWidget"));
        qmlWidget->setAcceptDrops(true);

        verticalLayout->addWidget(qmlWidget);


        retranslateUi(QGCQmlWidgetHolder);

        QMetaObject::connectSlotsByName(QGCQmlWidgetHolder);
    } // setupUi

    void retranslateUi(QWidget *QGCQmlWidgetHolder)
    {
        QGCQmlWidgetHolder->setWindowTitle(QApplication::translate("QGCQmlWidgetHolder", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCQmlWidgetHolder: public Ui_QGCQmlWidgetHolder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCQMLWIDGETHOLDER_H
