/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_aboutus
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_8;

    void setupUi(QDialog *aboutus)
    {
        if (aboutus->objectName().isEmpty())
            aboutus->setObjectName(QString::fromUtf8("aboutus"));
        aboutus->resize(827, 601);
        label = new QLabel(aboutus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-130, 0, 1051, 611));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 69, 79);"));
        label->setScaledContents(true);
        label_2 = new QLabel(aboutus);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 10, 171, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color:white;\n"
"            text-align:left;\n"
"	\n"
"	font: 20pt \"Segoe UI Emoji\";\n"
"	text-decoration: underline;\n"
"border:none;\n"
"        }"));
        label_5 = new QLabel(aboutus);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(320, 100, 151, 141));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../cpp.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(aboutus);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 110, 151, 141));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../qt.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(aboutus);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(580, 110, 151, 141));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/sql.png")));
        label_7->setScaledContents(true);
        label_3 = new QLabel(aboutus);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 60, 761, 221));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(40, 40, 43);"));
        label_4 = new QLabel(aboutus);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 300, 171, 41));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color:white;\n"
"            text-align:left;\n"
"	\n"
"	font: 20pt \"Segoe UI Emoji\";\n"
"	text-decoration: underline;\n"
"border:none;\n"
"        }"));
        label_8 = new QLabel(aboutus);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 350, 761, 221));
        label_8->setStyleSheet(QString::fromUtf8("background-color:rgb(40, 40, 43);"));
        label->raise();
        label_2->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_4->raise();
        label_8->raise();

        retranslateUi(aboutus);

        QMetaObject::connectSlotsByName(aboutus);
    } // setupUi

    void retranslateUi(QDialog *aboutus)
    {
        aboutus->setWindowTitle(QCoreApplication::translate("aboutus", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("aboutus", "\360\235\225\216\360\235\224\274 \360\235\225\214\360\235\225\212\360\235\224\274\360\235\224\273", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("aboutus", "\360\235\224\270\360\235\224\271\360\235\225\206\360\235\225\214\360\235\225\213", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class aboutus: public Ui_aboutus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
