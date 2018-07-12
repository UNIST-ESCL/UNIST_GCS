/********************************************************************************
** Form generated from reading UI file 'QGCMapRCToParamDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAPRCTOPARAMDIALOG_H
#define UI_QGCMAPRCTOPARAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QGCMapRCToParamDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label1;
    QLabel *rcParamChannelInfoLabel;
    QComboBox *rcParamChannelComboBox;
    QLabel *paramIdInfoLabel;
    QLabel *paramIdLabel;
    QLabel *label3;
    QLabel *scaleInfoLabel;
    QDoubleSpinBox *scaleDoubleSpinBox;
    QLabel *value0InfoLabel;
    QDoubleSpinBox *value0DoubleSpinBox;
    QLabel *minInfoLabel;
    QDoubleSpinBox *minValueDoubleSpinBox;
    QLabel *maxInfoLabel;
    QDoubleSpinBox *maxValueDoubleSpinBox;
    QLabel *infoLabel;
    QSpacerItem *verticalSpacer;
    QLabel *label2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QGCMapRCToParamDialog)
    {
        if (QGCMapRCToParamDialog->objectName().isEmpty())
            QGCMapRCToParamDialog->setObjectName(QStringLiteral("QGCMapRCToParamDialog"));
        QGCMapRCToParamDialog->resize(400, 358);
        verticalLayout = new QVBoxLayout(QGCMapRCToParamDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label1 = new QLabel(QGCMapRCToParamDialog);
        label1->setObjectName(QStringLiteral("label1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label1);

        rcParamChannelInfoLabel = new QLabel(QGCMapRCToParamDialog);
        rcParamChannelInfoLabel->setObjectName(QStringLiteral("rcParamChannelInfoLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, rcParamChannelInfoLabel);

        rcParamChannelComboBox = new QComboBox(QGCMapRCToParamDialog);
        rcParamChannelComboBox->setObjectName(QStringLiteral("rcParamChannelComboBox"));
        rcParamChannelComboBox->setEditable(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, rcParamChannelComboBox);

        paramIdInfoLabel = new QLabel(QGCMapRCToParamDialog);
        paramIdInfoLabel->setObjectName(QStringLiteral("paramIdInfoLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, paramIdInfoLabel);

        paramIdLabel = new QLabel(QGCMapRCToParamDialog);
        paramIdLabel->setObjectName(QStringLiteral("paramIdLabel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, paramIdLabel);

        label3 = new QLabel(QGCMapRCToParamDialog);
        label3->setObjectName(QStringLiteral("label3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label3);

        scaleInfoLabel = new QLabel(QGCMapRCToParamDialog);
        scaleInfoLabel->setObjectName(QStringLiteral("scaleInfoLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, scaleInfoLabel);

        scaleDoubleSpinBox = new QDoubleSpinBox(QGCMapRCToParamDialog);
        scaleDoubleSpinBox->setObjectName(QStringLiteral("scaleDoubleSpinBox"));
        scaleDoubleSpinBox->setValue(1);

        formLayout->setWidget(5, QFormLayout::FieldRole, scaleDoubleSpinBox);

        value0InfoLabel = new QLabel(QGCMapRCToParamDialog);
        value0InfoLabel->setObjectName(QStringLiteral("value0InfoLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, value0InfoLabel);

        value0DoubleSpinBox = new QDoubleSpinBox(QGCMapRCToParamDialog);
        value0DoubleSpinBox->setObjectName(QStringLiteral("value0DoubleSpinBox"));
        value0DoubleSpinBox->setEnabled(false);
        value0DoubleSpinBox->setDecimals(8);
        value0DoubleSpinBox->setMinimum(-100000);
        value0DoubleSpinBox->setMaximum(100000);

        formLayout->setWidget(6, QFormLayout::FieldRole, value0DoubleSpinBox);

        minInfoLabel = new QLabel(QGCMapRCToParamDialog);
        minInfoLabel->setObjectName(QStringLiteral("minInfoLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, minInfoLabel);

        minValueDoubleSpinBox = new QDoubleSpinBox(QGCMapRCToParamDialog);
        minValueDoubleSpinBox->setObjectName(QStringLiteral("minValueDoubleSpinBox"));
        minValueDoubleSpinBox->setDecimals(8);
        minValueDoubleSpinBox->setMinimum(-100000);
        minValueDoubleSpinBox->setMaximum(100000);

        formLayout->setWidget(7, QFormLayout::FieldRole, minValueDoubleSpinBox);

        maxInfoLabel = new QLabel(QGCMapRCToParamDialog);
        maxInfoLabel->setObjectName(QStringLiteral("maxInfoLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, maxInfoLabel);

        maxValueDoubleSpinBox = new QDoubleSpinBox(QGCMapRCToParamDialog);
        maxValueDoubleSpinBox->setObjectName(QStringLiteral("maxValueDoubleSpinBox"));
        maxValueDoubleSpinBox->setDecimals(8);
        maxValueDoubleSpinBox->setMinimum(-10000);
        maxValueDoubleSpinBox->setMaximum(100000);
        maxValueDoubleSpinBox->setSingleStep(1);
        maxValueDoubleSpinBox->setValue(10);

        formLayout->setWidget(8, QFormLayout::FieldRole, maxValueDoubleSpinBox);

        infoLabel = new QLabel(QGCMapRCToParamDialog);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, infoLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(9, QFormLayout::LabelRole, verticalSpacer);

        label2 = new QLabel(QGCMapRCToParamDialog);
        label2->setObjectName(QStringLiteral("label2"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, label2);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(QGCMapRCToParamDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QGCMapRCToParamDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QGCMapRCToParamDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QGCMapRCToParamDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QGCMapRCToParamDialog);
    } // setupUi

    void retranslateUi(QDialog *QGCMapRCToParamDialog)
    {
        QGCMapRCToParamDialog->setWindowTitle(QApplication::translate("QGCMapRCToParamDialog", "Dialog", Q_NULLPTR));
        label1->setText(QApplication::translate("QGCMapRCToParamDialog", "Bind", Q_NULLPTR));
        rcParamChannelInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Parameter Tuning ID", Q_NULLPTR));
        rcParamChannelComboBox->clear();
        rcParamChannelComboBox->insertItems(0, QStringList()
         << QApplication::translate("QGCMapRCToParamDialog", "1", Q_NULLPTR)
         << QApplication::translate("QGCMapRCToParamDialog", "2", Q_NULLPTR)
         << QApplication::translate("QGCMapRCToParamDialog", "3", Q_NULLPTR)
        );
        rcParamChannelComboBox->setCurrentText(QApplication::translate("QGCMapRCToParamDialog", "1", Q_NULLPTR));
        paramIdInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Parameter", Q_NULLPTR));
        paramIdLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "TextLabel", Q_NULLPTR));
        label3->setText(QApplication::translate("QGCMapRCToParamDialog", "with", Q_NULLPTR));
        scaleInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Scale (keep default)", Q_NULLPTR));
        value0InfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Center value", Q_NULLPTR));
        minInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Minimum Value", Q_NULLPTR));
        maxInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Maximum Value", Q_NULLPTR));
        infoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Waiting for parameter refresh,,,", Q_NULLPTR));
        label2->setText(QApplication::translate("QGCMapRCToParamDialog", "Tuning IDs can be mapped to channels in the RC settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QGCMapRCToParamDialog: public Ui_QGCMapRCToParamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAPRCTOPARAMDIALOG_H
