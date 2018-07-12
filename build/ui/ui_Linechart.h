/********************************************************************************
** Form generated from reading UI file 'Linechart.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINECHART_H
#define UI_LINECHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_linechart
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QWidget *curveGroupBox;
    QGridLayout *gridLayout;
    QScrollArea *curveListWidget;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *plotFilterLineEdit;
    QComboBox *uasSelectionBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *shortNameCheckBox;
    QCheckBox *showUnitsCheckBox;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *recolorButton;
    QSpacerItem *verticalSpacer;
    QWidget *diagramGroupBox;

    void setupUi(QWidget *linechart)
    {
        if (linechart->objectName().isEmpty())
            linechart->setObjectName(QStringLiteral("linechart"));
        linechart->resize(1337, 585);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(linechart->sizePolicy().hasHeightForWidth());
        linechart->setSizePolicy(sizePolicy);
        linechart->setMinimumSize(QSize(300, 200));
        linechart->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(linechart);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 6, 6, 6);
        splitter = new QSplitter(linechart);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setMidLineWidth(1);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(10);
        curveGroupBox = new QWidget(splitter);
        curveGroupBox->setObjectName(QStringLiteral("curveGroupBox"));
        gridLayout = new QGridLayout(curveGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 3);
        curveListWidget = new QScrollArea(curveGroupBox);
        curveListWidget->setObjectName(QStringLiteral("curveListWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(curveListWidget->sizePolicy().hasHeightForWidth());
        curveListWidget->setSizePolicy(sizePolicy1);
        curveListWidget->setMinimumSize(QSize(60, 150));
        curveListWidget->setBaseSize(QSize(60, 150));
        curveListWidget->setAutoFillBackground(false);
        curveListWidget->setStyleSheet(QStringLiteral(""));
        curveListWidget->setFrameShape(QFrame::NoFrame);
        curveListWidget->setFrameShadow(QFrame::Sunken);
        curveListWidget->setWidgetResizable(true);
        curveListWidget->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 879, 462));
        curveListWidget->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(curveListWidget, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        plotFilterLineEdit = new QLineEdit(curveGroupBox);
        plotFilterLineEdit->setObjectName(QStringLiteral("plotFilterLineEdit"));

        verticalLayout_2->addWidget(plotFilterLineEdit);

        uasSelectionBox = new QComboBox(curveGroupBox);
        uasSelectionBox->setObjectName(QStringLiteral("uasSelectionBox"));

        verticalLayout_2->addWidget(uasSelectionBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        shortNameCheckBox = new QCheckBox(curveGroupBox);
        shortNameCheckBox->setObjectName(QStringLiteral("shortNameCheckBox"));

        verticalLayout_3->addWidget(shortNameCheckBox);

        showUnitsCheckBox = new QCheckBox(curveGroupBox);
        showUnitsCheckBox->setObjectName(QStringLiteral("showUnitsCheckBox"));
        showUnitsCheckBox->setChecked(true);

        verticalLayout_3->addWidget(showUnitsCheckBox);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_4->setContentsMargins(-1, -1, -1, 0);
        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        recolorButton = new QPushButton(curveGroupBox);
        recolorButton->setObjectName(QStringLiteral("recolorButton"));

        verticalLayout_4->addWidget(recolorButton);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalLayout->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 3, 0, 1, 1);

        gridLayout->setRowStretch(0, 50);
        splitter->addWidget(curveGroupBox);
        diagramGroupBox = new QWidget(splitter);
        diagramGroupBox->setObjectName(QStringLiteral("diagramGroupBox"));
        splitter->addWidget(diagramGroupBox);

        horizontalLayout_2->addWidget(splitter);


        retranslateUi(linechart);

        QMetaObject::connectSlotsByName(linechart);
    } // setupUi

    void retranslateUi(QWidget *linechart)
    {
        linechart->setWindowTitle(QApplication::translate("linechart", "Form", Q_NULLPTR));
        plotFilterLineEdit->setPlaceholderText(QApplication::translate("linechart", "Filter... (Ctrl+F)", Q_NULLPTR));
        uasSelectionBox->clear();
        uasSelectionBox->insertItems(0, QStringList()
         << QApplication::translate("linechart", "All MAVs", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        shortNameCheckBox->setToolTip(QApplication::translate("linechart", "Display only variable names in curve list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        shortNameCheckBox->setText(QApplication::translate("linechart", "Short names", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        showUnitsCheckBox->setToolTip(QApplication::translate("linechart", "Display variable units in curve list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        showUnitsCheckBox->setWhatsThis(QApplication::translate("linechart", "Display variable units in curve list", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        showUnitsCheckBox->setText(QApplication::translate("linechart", "Show units", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        recolorButton->setToolTip(QApplication::translate("linechart", "Rotate color scheme for all curves", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        recolorButton->setText(QApplication::translate("linechart", "Recolor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class linechart: public Ui_linechart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINECHART_H
