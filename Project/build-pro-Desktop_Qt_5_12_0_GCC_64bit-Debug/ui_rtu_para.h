/********************************************************************************
** Form generated from reading UI file 'rtu_para.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTU_PARA_H
#define UI_RTU_PARA_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_rtu_para
{
public:
    QComboBox *cb_rtu_station;
    QLabel *label;
    QComboBox *cb_rtu_producer;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *cb_position;
    QLabel *label_4;
    QComboBox *cb_rtu_number;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *cb_rtu_type;
    QLabel *label_7;
    QComboBox *cb_rtu_grade;
    QLabel *label_8;
    QComboBox *cb_twice_v;
    QLabel *label_9;
    QComboBox *cb_twice_a;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *cb_rtu_lineway;
    QLabel *label_13;
    QComboBox *cb_rtu_protocl;
    QLabel *label_14;
    QComboBox *cb_dc_V;
    QLabel *label_15;
    QComboBox *cb_dc_A;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QComboBox *cb_temper;
    QLabel *label_19;
    QComboBox *cb_checker1;
    QLabel *label_20;
    QComboBox *cb_humdity;
    QLabel *label_21;
    QComboBox *cb_checker2;
    QLabel *label_22;
    QComboBox *cb_variable_check;
    QComboBox *cb_error_check;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QPushButton *pb_tel_para;
    QTextEdit *te_rtu_line;
    QTextEdit *te_uid_number;
    QTextEdit *te_check_number;
    QTextEdit *te_PT_Ratio;
    QTextEdit *te_CT_Ratio;
    QPushButton *pb_add;
    QPushButton *pb_save;
    QPushButton *pb_delete;
    QPushButton *pb_previous;
    QPushButton *pb_next;
    QLabel *lb_record_page;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;

    void setupUi(QDialog *rtu_para)
    {
        if (rtu_para->objectName().isEmpty())
            rtu_para->setObjectName(QString::fromUtf8("rtu_para"));
        rtu_para->resize(785, 659);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rtu_para->sizePolicy().hasHeightForWidth());
        rtu_para->setSizePolicy(sizePolicy);
        rtu_para->setCursor(QCursor(Qt::ArrowCursor));
        rtu_para->setWindowTitle(QString::fromUtf8("RTU\345\237\272\346\234\254\345\217\202\346\225\260\345\275\225\345\205\245"));
        rtu_para->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        cb_rtu_station = new QComboBox(rtu_para);
        cb_rtu_station->addItem(QString());
        cb_rtu_station->setObjectName(QString::fromUtf8("cb_rtu_station"));
        cb_rtu_station->setGeometry(QRect(130, 20, 161, 30));
        cb_rtu_station->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        cb_rtu_station->setEditable(true);
        cb_rtu_station->setMaxVisibleItems(5);
        cb_rtu_station->setInsertPolicy(QComboBox::InsertAtBottom);
        label = new QLabel(rtu_para);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(36, 20, 81, 31));
        label->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        cb_rtu_producer = new QComboBox(rtu_para);
        cb_rtu_producer->addItem(QString());
        cb_rtu_producer->setObjectName(QString::fromUtf8("cb_rtu_producer"));
        cb_rtu_producer->setGeometry(QRect(480, 70, 281, 30));
        cb_rtu_producer->setEditable(true);
        cb_rtu_producer->setMaxVisibleItems(5);
        label_2 = new QLabel(rtu_para);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 70, 81, 31));
        label_3 = new QLabel(rtu_para);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 20, 101, 31));
        label_3->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        cb_position = new QComboBox(rtu_para);
        cb_position->addItem(QString());
        cb_position->setObjectName(QString::fromUtf8("cb_position"));
        cb_position->setGeometry(QRect(480, 20, 281, 30));
        cb_position->setEditable(true);
        label_4 = new QLabel(rtu_para);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 120, 101, 31));
        cb_rtu_number = new QComboBox(rtu_para);
        cb_rtu_number->addItem(QString());
        cb_rtu_number->setObjectName(QString::fromUtf8("cb_rtu_number"));
        cb_rtu_number->setGeometry(QRect(130, 70, 161, 30));
        cb_rtu_number->setEditable(true);
        cb_rtu_number->setMaxVisibleItems(5);
        label_5 = new QLabel(rtu_para);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 70, 101, 31));
        label_6 = new QLabel(rtu_para);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 170, 121, 31));
        cb_rtu_type = new QComboBox(rtu_para);
        cb_rtu_type->addItem(QString());
        cb_rtu_type->setObjectName(QString::fromUtf8("cb_rtu_type"));
        cb_rtu_type->setGeometry(QRect(480, 170, 281, 30));
        cb_rtu_type->setEditable(true);
        cb_rtu_type->setMaxVisibleItems(5);
        label_7 = new QLabel(rtu_para);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(53, 170, 101, 31));
        cb_rtu_grade = new QComboBox(rtu_para);
        cb_rtu_grade->addItem(QString());
        cb_rtu_grade->addItem(QString());
        cb_rtu_grade->addItem(QString());
        cb_rtu_grade->addItem(QString());
        cb_rtu_grade->setObjectName(QString::fromUtf8("cb_rtu_grade"));
        cb_rtu_grade->setGeometry(QRect(130, 170, 161, 30));
        cb_rtu_grade->setEditable(true);
        cb_rtu_grade->setMaxVisibleItems(5);
        label_8 = new QLabel(rtu_para);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(14, 320, 101, 31));
        cb_twice_v = new QComboBox(rtu_para);
        cb_twice_v->addItem(QString());
        cb_twice_v->addItem(QString());
        cb_twice_v->addItem(QString());
        cb_twice_v->addItem(QString());
        cb_twice_v->setObjectName(QString::fromUtf8("cb_twice_v"));
        cb_twice_v->setGeometry(QRect(130, 320, 161, 30));
        cb_twice_v->setEditable(true);
        cb_twice_v->setMaxVisibleItems(5);
        label_9 = new QLabel(rtu_para);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 370, 101, 31));
        cb_twice_a = new QComboBox(rtu_para);
        cb_twice_a->addItem(QString());
        cb_twice_a->addItem(QString());
        cb_twice_a->addItem(QString());
        cb_twice_a->addItem(QString());
        cb_twice_a->setObjectName(QString::fromUtf8("cb_twice_a"));
        cb_twice_a->setGeometry(QRect(130, 370, 161, 30));
        cb_twice_a->setEditable(true);
        cb_twice_a->setMaxVisibleItems(5);
        label_10 = new QLabel(rtu_para);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(55, 220, 101, 31));
        label_11 = new QLabel(rtu_para);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(55, 270, 101, 31));
        label_12 = new QLabel(rtu_para);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(401, 320, 101, 31));
        cb_rtu_lineway = new QComboBox(rtu_para);
        cb_rtu_lineway->addItem(QString());
        cb_rtu_lineway->addItem(QString());
        cb_rtu_lineway->addItem(QString());
        cb_rtu_lineway->addItem(QString());
        cb_rtu_lineway->setObjectName(QString::fromUtf8("cb_rtu_lineway"));
        cb_rtu_lineway->setGeometry(QRect(480, 320, 181, 30));
        cb_rtu_lineway->setMaxVisibleItems(5);
        label_13 = new QLabel(rtu_para);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(400, 270, 101, 31));
        cb_rtu_protocl = new QComboBox(rtu_para);
        cb_rtu_protocl->addItem(QString());
        cb_rtu_protocl->setObjectName(QString::fromUtf8("cb_rtu_protocl"));
        cb_rtu_protocl->setGeometry(QRect(480, 270, 281, 30));
        cb_rtu_protocl->setMaxVisibleItems(5);
        label_14 = new QLabel(rtu_para);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 420, 101, 31));
        cb_dc_V = new QComboBox(rtu_para);
        cb_dc_V->addItem(QString());
        cb_dc_V->setObjectName(QString::fromUtf8("cb_dc_V"));
        cb_dc_V->setGeometry(QRect(130, 420, 161, 30));
        cb_dc_V->setEditable(true);
        cb_dc_V->setMaxVisibleItems(5);
        label_15 = new QLabel(rtu_para);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 470, 101, 31));
        cb_dc_A = new QComboBox(rtu_para);
        cb_dc_A->addItem(QString());
        cb_dc_A->setObjectName(QString::fromUtf8("cb_dc_A"));
        cb_dc_A->setGeometry(QRect(130, 470, 161, 30));
        cb_dc_A->setEditable(true);
        cb_dc_A->setMaxVisibleItems(5);
        label_16 = new QLabel(rtu_para);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(400, 220, 101, 31));
        label_17 = new QLabel(rtu_para);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(434, 576, 41, 16));
        label_18 = new QLabel(rtu_para);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(49, 520, 101, 31));
        cb_temper = new QComboBox(rtu_para);
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->addItem(QString());
        cb_temper->setObjectName(QString::fromUtf8("cb_temper"));
        cb_temper->setGeometry(QRect(130, 520, 161, 30));
        cb_temper->setEditable(false);
        cb_temper->setMaxVisibleItems(5);
        label_19 = new QLabel(rtu_para);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(412, 470, 101, 31));
        cb_checker1 = new QComboBox(rtu_para);
        cb_checker1->addItem(QString());
        cb_checker1->setObjectName(QString::fromUtf8("cb_checker1"));
        cb_checker1->setGeometry(QRect(480, 470, 181, 30));
        cb_checker1->setEditable(true);
        cb_checker1->setMaxVisibleItems(5);
        label_20 = new QLabel(rtu_para);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(50, 570, 81, 31));
        cb_humdity = new QComboBox(rtu_para);
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->addItem(QString());
        cb_humdity->setObjectName(QString::fromUtf8("cb_humdity"));
        cb_humdity->setGeometry(QRect(130, 570, 161, 30));
        cb_humdity->setEditable(false);
        cb_humdity->setMaxVisibleItems(5);
        label_21 = new QLabel(rtu_para);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(412, 520, 101, 31));
        cb_checker2 = new QComboBox(rtu_para);
        cb_checker2->addItem(QString());
        cb_checker2->setObjectName(QString::fromUtf8("cb_checker2"));
        cb_checker2->setGeometry(QRect(480, 520, 181, 30));
        cb_checker2->setEditable(true);
        cb_checker2->setMaxVisibleItems(5);
        label_22 = new QLabel(rtu_para);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(364, 420, 121, 31));
        cb_variable_check = new QComboBox(rtu_para);
        cb_variable_check->addItem(QString());
        cb_variable_check->setObjectName(QString::fromUtf8("cb_variable_check"));
        cb_variable_check->setGeometry(QRect(480, 420, 181, 30));
        cb_variable_check->setEditable(true);
        cb_variable_check->setMaxVisibleItems(5);
        cb_error_check = new QComboBox(rtu_para);
        cb_error_check->addItem(QString());
        cb_error_check->setObjectName(QString::fromUtf8("cb_error_check"));
        cb_error_check->setGeometry(QRect(480, 370, 181, 30));
        cb_error_check->setEditable(true);
        cb_error_check->setMaxVisibleItems(5);
        label_23 = new QLabel(rtu_para);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(372, 370, 100, 30));
        label_24 = new QLabel(rtu_para);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(710, 450, 21, 31));
        label_25 = new QLabel(rtu_para);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(644, 570, 31, 31));
        pb_tel_para = new QPushButton(rtu_para);
        pb_tel_para->setObjectName(QString::fromUtf8("pb_tel_para"));
        pb_tel_para->setGeometry(QRect(620, 620, 131, 31));
        te_rtu_line = new QTextEdit(rtu_para);
        te_rtu_line->setObjectName(QString::fromUtf8("te_rtu_line"));
        te_rtu_line->setGeometry(QRect(130, 120, 631, 31));
        te_rtu_line->setTabChangesFocus(true);
        te_uid_number = new QTextEdit(rtu_para);
        te_uid_number->setObjectName(QString::fromUtf8("te_uid_number"));
        te_uid_number->setGeometry(QRect(480, 570, 161, 30));
        te_uid_number->setTabChangesFocus(true);
        te_check_number = new QTextEdit(rtu_para);
        te_check_number->setObjectName(QString::fromUtf8("te_check_number"));
        te_check_number->setGeometry(QRect(480, 220, 281, 30));
        te_check_number->setTabChangesFocus(true);
        te_PT_Ratio = new QTextEdit(rtu_para);
        te_PT_Ratio->setObjectName(QString::fromUtf8("te_PT_Ratio"));
        te_PT_Ratio->setGeometry(QRect(130, 220, 161, 31));
        te_PT_Ratio->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        te_PT_Ratio->setTabChangesFocus(true);
        te_CT_Ratio = new QTextEdit(rtu_para);
        te_CT_Ratio->setObjectName(QString::fromUtf8("te_CT_Ratio"));
        te_CT_Ratio->setGeometry(QRect(130, 270, 161, 31));
        te_CT_Ratio->setTabChangesFocus(true);
        pb_add = new QPushButton(rtu_para);
        pb_add->setObjectName(QString::fromUtf8("pb_add"));
        pb_add->setGeometry(QRect(160, 620, 61, 31));
        pb_add->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        pb_save = new QPushButton(rtu_para);
        pb_save->setObjectName(QString::fromUtf8("pb_save"));
        pb_save->setGeometry(QRect(250, 620, 61, 31));
        pb_delete = new QPushButton(rtu_para);
        pb_delete->setObjectName(QString::fromUtf8("pb_delete"));
        pb_delete->setGeometry(QRect(340, 620, 61, 31));
        pb_previous = new QPushButton(rtu_para);
        pb_previous->setObjectName(QString::fromUtf8("pb_previous"));
        pb_previous->setGeometry(QRect(430, 620, 61, 31));
        pb_next = new QPushButton(rtu_para);
        pb_next->setObjectName(QString::fromUtf8("pb_next"));
        pb_next->setGeometry(QRect(520, 620, 61, 31));
        lb_record_page = new QLabel(rtu_para);
        lb_record_page->setObjectName(QString::fromUtf8("lb_record_page"));
        lb_record_page->setGeometry(QRect(702, 427, 31, 31));
        lb_record_page->setLayoutDirection(Qt::LeftToRight);
        lb_record_page->setAutoFillBackground(true);
        lb_record_page->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(rtu_para);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(710, 400, 21, 31));
        label_27 = new QLabel(rtu_para);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(710, 480, 21, 31));
        label_28 = new QLabel(rtu_para);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(710, 510, 21, 31));

        retranslateUi(rtu_para);

        QMetaObject::connectSlotsByName(rtu_para);
    } // setupUi

    void retranslateUi(QDialog *rtu_para)
    {
        cb_rtu_station->setItemText(0, QApplication::translate("rtu_para", "1", nullptr));

        label->setText(QApplication::translate("rtu_para", "\345\217\230\347\224\265\347\253\231\345\220\215\347\247\260:", nullptr));
        cb_rtu_producer->setItemText(0, QApplication::translate("rtu_para", "4", nullptr));

        label_2->setText(QApplication::translate("rtu_para", "\345\210\266\351\200\240\345\216\202\345\256\266:", nullptr));
        label_3->setText(QApplication::translate("rtu_para", "\350\243\205\347\275\256\345\256\211\350\243\205\344\275\215\347\275\256:", nullptr));
        cb_position->setItemText(0, QApplication::translate("rtu_para", "2", nullptr));

        label_4->setText(QApplication::translate("rtu_para", "\347\272\277\350\267\257\345\220\215\347\247\260:", nullptr));
        cb_rtu_number->setItemText(0, QApplication::translate("rtu_para", "3", nullptr));

        label_5->setText(QApplication::translate("rtu_para", "\345\207\272\345\216\202\347\274\226\345\217\267:", nullptr));
        label_6->setText(QApplication::translate("rtu_para", "RTU\345\236\213\345\217\267:", nullptr));
        cb_rtu_type->setItemText(0, QApplication::translate("rtu_para", "6", nullptr));

        label_7->setText(QApplication::translate("rtu_para", "\347\255\211        \347\272\247:", nullptr));
        cb_rtu_grade->setItemText(0, QApplication::translate("rtu_para", "0.1", nullptr));
        cb_rtu_grade->setItemText(1, QApplication::translate("rtu_para", "0.2", nullptr));
        cb_rtu_grade->setItemText(2, QApplication::translate("rtu_para", "0.5", nullptr));
        cb_rtu_grade->setItemText(3, QApplication::translate("rtu_para", "1", nullptr));

        label_8->setText(QApplication::translate("rtu_para", "PT\344\272\214\346\254\241\347\224\265\345\216\213(V):", nullptr));
        cb_twice_v->setItemText(0, QApplication::translate("rtu_para", "57.7", nullptr));
        cb_twice_v->setItemText(1, QApplication::translate("rtu_para", "100", nullptr));
        cb_twice_v->setItemText(2, QApplication::translate("rtu_para", "220", nullptr));
        cb_twice_v->setItemText(3, QApplication::translate("rtu_para", "380", nullptr));

        label_9->setText(QApplication::translate("rtu_para", "CT\344\272\214\346\254\241\347\224\265\346\265\201(A):", nullptr));
        cb_twice_a->setItemText(0, QApplication::translate("rtu_para", "1.0", nullptr));
        cb_twice_a->setItemText(1, QApplication::translate("rtu_para", "2.0", nullptr));
        cb_twice_a->setItemText(2, QApplication::translate("rtu_para", "5.0", nullptr));
        cb_twice_a->setItemText(3, QApplication::translate("rtu_para", "20.0", nullptr));

        label_10->setText(QApplication::translate("rtu_para", "PT  \345\217\230\346\257\224:", nullptr));
        label_11->setText(QApplication::translate("rtu_para", "CT  \345\217\230\346\257\224:", nullptr));
        label_12->setText(QApplication::translate("rtu_para", "\346\216\245\347\272\277\346\226\271\345\274\217:", nullptr));
        cb_rtu_lineway->setItemText(0, QApplication::translate("rtu_para", "\344\270\211\347\233\270\345\233\233\347\272\277", nullptr));
        cb_rtu_lineway->setItemText(1, QApplication::translate("rtu_para", "\344\270\211\347\233\270\344\270\211\347\272\277", nullptr));
        cb_rtu_lineway->setItemText(2, QApplication::translate("rtu_para", "\344\270\211\347\233\270\345\233\233\347\272\277(\346\227\240IB)", nullptr));
        cb_rtu_lineway->setItemText(3, QApplication::translate("rtu_para", "\344\270\211\347\233\270\344\270\211\347\272\277(\345\212\240IB)", nullptr));

        label_13->setText(QApplication::translate("rtu_para", "\351\200\232\350\256\257\345\215\217\350\256\256:", nullptr));
        cb_rtu_protocl->setItemText(0, QApplication::translate("rtu_para", "\351\273\230\350\256\244\346\226\271\346\241\210", nullptr));

        label_14->setText(QApplication::translate("rtu_para", "\347\233\264\346\265\201\347\224\265\345\216\213\350\276\223\345\205\245:", nullptr));
        cb_dc_V->setItemText(0, QApplication::translate("rtu_para", "10", nullptr));

        label_15->setText(QApplication::translate("rtu_para", "\347\233\264\346\265\201\347\224\265\346\265\201\350\276\223\345\205\245:", nullptr));
        cb_dc_A->setItemText(0, QApplication::translate("rtu_para", "11", nullptr));

        label_16->setText(QApplication::translate("rtu_para", "\346\243\200\351\252\214\350\257\201\345\217\267:", nullptr));
        label_17->setText(QApplication::translate("rtu_para", "\345\255\227\347\254\254:", nullptr));
        label_18->setText(QApplication::translate("rtu_para", "\347\216\257\345\242\203\346\270\251\345\272\246:", nullptr));
        cb_temper->setItemText(0, QApplication::translate("rtu_para", "15", nullptr));
        cb_temper->setItemText(1, QApplication::translate("rtu_para", "16", nullptr));
        cb_temper->setItemText(2, QApplication::translate("rtu_para", "17", nullptr));
        cb_temper->setItemText(3, QApplication::translate("rtu_para", "18", nullptr));
        cb_temper->setItemText(4, QApplication::translate("rtu_para", "19", nullptr));
        cb_temper->setItemText(5, QApplication::translate("rtu_para", "20", nullptr));
        cb_temper->setItemText(6, QApplication::translate("rtu_para", "21", nullptr));
        cb_temper->setItemText(7, QApplication::translate("rtu_para", "22", nullptr));
        cb_temper->setItemText(8, QApplication::translate("rtu_para", "23", nullptr));
        cb_temper->setItemText(9, QApplication::translate("rtu_para", "24", nullptr));
        cb_temper->setItemText(10, QApplication::translate("rtu_para", "25", nullptr));
        cb_temper->setItemText(11, QApplication::translate("rtu_para", "26", nullptr));
        cb_temper->setItemText(12, QApplication::translate("rtu_para", "27", nullptr));
        cb_temper->setItemText(13, QApplication::translate("rtu_para", "28", nullptr));
        cb_temper->setItemText(14, QApplication::translate("rtu_para", "29", nullptr));
        cb_temper->setItemText(15, QApplication::translate("rtu_para", "30", nullptr));
        cb_temper->setItemText(16, QApplication::translate("rtu_para", "31", nullptr));
        cb_temper->setItemText(17, QApplication::translate("rtu_para", "32", nullptr));
        cb_temper->setItemText(18, QApplication::translate("rtu_para", "33", nullptr));
        cb_temper->setItemText(19, QApplication::translate("rtu_para", "34", nullptr));
        cb_temper->setItemText(20, QApplication::translate("rtu_para", "35", nullptr));
        cb_temper->setItemText(21, QApplication::translate("rtu_para", "36", nullptr));
        cb_temper->setItemText(22, QApplication::translate("rtu_para", "37", nullptr));
        cb_temper->setItemText(23, QApplication::translate("rtu_para", "38", nullptr));
        cb_temper->setItemText(24, QApplication::translate("rtu_para", "39", nullptr));
        cb_temper->setItemText(25, QApplication::translate("rtu_para", "40", nullptr));

        label_19->setText(QApplication::translate("rtu_para", "\346\243\200\345\256\232\345\221\2301:", nullptr));
        cb_checker1->setItemText(0, QApplication::translate("rtu_para", "12", nullptr));

        label_20->setText(QApplication::translate("rtu_para", "\347\233\270\345\257\271\346\271\277\345\272\246:", nullptr));
        cb_humdity->setItemText(0, QApplication::translate("rtu_para", "25", nullptr));
        cb_humdity->setItemText(1, QApplication::translate("rtu_para", "26", nullptr));
        cb_humdity->setItemText(2, QApplication::translate("rtu_para", "27", nullptr));
        cb_humdity->setItemText(3, QApplication::translate("rtu_para", "28", nullptr));
        cb_humdity->setItemText(4, QApplication::translate("rtu_para", "29", nullptr));
        cb_humdity->setItemText(5, QApplication::translate("rtu_para", "30", nullptr));
        cb_humdity->setItemText(6, QApplication::translate("rtu_para", "31", nullptr));
        cb_humdity->setItemText(7, QApplication::translate("rtu_para", "32", nullptr));
        cb_humdity->setItemText(8, QApplication::translate("rtu_para", "33", nullptr));
        cb_humdity->setItemText(9, QApplication::translate("rtu_para", "34", nullptr));
        cb_humdity->setItemText(10, QApplication::translate("rtu_para", "35", nullptr));
        cb_humdity->setItemText(11, QApplication::translate("rtu_para", "36", nullptr));
        cb_humdity->setItemText(12, QApplication::translate("rtu_para", "37", nullptr));
        cb_humdity->setItemText(13, QApplication::translate("rtu_para", "38", nullptr));
        cb_humdity->setItemText(14, QApplication::translate("rtu_para", "39", nullptr));
        cb_humdity->setItemText(15, QApplication::translate("rtu_para", "40", nullptr));
        cb_humdity->setItemText(16, QApplication::translate("rtu_para", "41", nullptr));
        cb_humdity->setItemText(17, QApplication::translate("rtu_para", "42", nullptr));
        cb_humdity->setItemText(18, QApplication::translate("rtu_para", "43", nullptr));
        cb_humdity->setItemText(19, QApplication::translate("rtu_para", "44", nullptr));
        cb_humdity->setItemText(20, QApplication::translate("rtu_para", "45", nullptr));
        cb_humdity->setItemText(21, QApplication::translate("rtu_para", "46", nullptr));
        cb_humdity->setItemText(22, QApplication::translate("rtu_para", "47", nullptr));
        cb_humdity->setItemText(23, QApplication::translate("rtu_para", "48", nullptr));
        cb_humdity->setItemText(24, QApplication::translate("rtu_para", "49", nullptr));
        cb_humdity->setItemText(25, QApplication::translate("rtu_para", "50", nullptr));
        cb_humdity->setItemText(26, QApplication::translate("rtu_para", "51", nullptr));
        cb_humdity->setItemText(27, QApplication::translate("rtu_para", "52", nullptr));
        cb_humdity->setItemText(28, QApplication::translate("rtu_para", "53", nullptr));
        cb_humdity->setItemText(29, QApplication::translate("rtu_para", "54", nullptr));
        cb_humdity->setItemText(30, QApplication::translate("rtu_para", "55", nullptr));
        cb_humdity->setItemText(31, QApplication::translate("rtu_para", "56", nullptr));
        cb_humdity->setItemText(32, QApplication::translate("rtu_para", "57", nullptr));
        cb_humdity->setItemText(33, QApplication::translate("rtu_para", "58", nullptr));
        cb_humdity->setItemText(34, QApplication::translate("rtu_para", "59", nullptr));
        cb_humdity->setItemText(35, QApplication::translate("rtu_para", "60", nullptr));
        cb_humdity->setItemText(36, QApplication::translate("rtu_para", "61", nullptr));
        cb_humdity->setItemText(37, QApplication::translate("rtu_para", "62", nullptr));
        cb_humdity->setItemText(38, QApplication::translate("rtu_para", "63", nullptr));
        cb_humdity->setItemText(39, QApplication::translate("rtu_para", "64", nullptr));
        cb_humdity->setItemText(40, QApplication::translate("rtu_para", "65", nullptr));
        cb_humdity->setItemText(41, QApplication::translate("rtu_para", "66", nullptr));
        cb_humdity->setItemText(42, QApplication::translate("rtu_para", "67", nullptr));
        cb_humdity->setItemText(43, QApplication::translate("rtu_para", "68", nullptr));
        cb_humdity->setItemText(44, QApplication::translate("rtu_para", "69", nullptr));
        cb_humdity->setItemText(45, QApplication::translate("rtu_para", "70", nullptr));
        cb_humdity->setItemText(46, QApplication::translate("rtu_para", "71", nullptr));
        cb_humdity->setItemText(47, QApplication::translate("rtu_para", "72", nullptr));
        cb_humdity->setItemText(48, QApplication::translate("rtu_para", "73", nullptr));
        cb_humdity->setItemText(49, QApplication::translate("rtu_para", "74", nullptr));
        cb_humdity->setItemText(50, QApplication::translate("rtu_para", "75", nullptr));
        cb_humdity->setItemText(51, QApplication::translate("rtu_para", "76", nullptr));
        cb_humdity->setItemText(52, QApplication::translate("rtu_para", "77", nullptr));
        cb_humdity->setItemText(53, QApplication::translate("rtu_para", "78", nullptr));
        cb_humdity->setItemText(54, QApplication::translate("rtu_para", "79", nullptr));
        cb_humdity->setItemText(55, QApplication::translate("rtu_para", "80", nullptr));
        cb_humdity->setItemText(56, QApplication::translate("rtu_para", "81", nullptr));
        cb_humdity->setItemText(57, QApplication::translate("rtu_para", "82", nullptr));
        cb_humdity->setItemText(58, QApplication::translate("rtu_para", "83", nullptr));
        cb_humdity->setItemText(59, QApplication::translate("rtu_para", "84", nullptr));
        cb_humdity->setItemText(60, QApplication::translate("rtu_para", "85", nullptr));
        cb_humdity->setItemText(61, QApplication::translate("rtu_para", "86", nullptr));
        cb_humdity->setItemText(62, QApplication::translate("rtu_para", "87", nullptr));
        cb_humdity->setItemText(63, QApplication::translate("rtu_para", "88", nullptr));
        cb_humdity->setItemText(64, QApplication::translate("rtu_para", "89", nullptr));
        cb_humdity->setItemText(65, QApplication::translate("rtu_para", "90", nullptr));

        label_21->setText(QApplication::translate("rtu_para", "\346\243\200\345\256\232\345\221\2302:", nullptr));
        cb_checker2->setItemText(0, QApplication::translate("rtu_para", "13", nullptr));

        label_22->setText(QApplication::translate("rtu_para", "\346\224\271\345\217\230\351\207\217\346\243\200\345\256\232\346\226\271\346\241\210:", nullptr));
        cb_variable_check->setItemText(0, QApplication::translate("rtu_para", "\351\273\230\350\256\244\346\226\271\346\241\210", nullptr));

        cb_error_check->setItemText(0, QApplication::translate("rtu_para", "\351\273\230\350\256\244\346\226\271\346\241\210", nullptr));

        label_23->setText(QApplication::translate("rtu_para", "\350\257\257\345\267\256\346\243\200\345\256\232\346\226\271\346\241\210:", nullptr));
        label_24->setText(QApplication::translate("rtu_para", "\346\235\241", nullptr));
        label_25->setText(QApplication::translate("rtu_para", "\345\217\267", nullptr));
        pb_tel_para->setText(QApplication::translate("rtu_para", "\344\270\213\344\270\200\346\255\245:\351\201\245\346\216\247\345\217\202\346\225\260", nullptr));
        te_rtu_line->setHtml(QApplication::translate("rtu_para", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5</p></body></html>", nullptr));
        te_uid_number->setHtml(QApplication::translate("rtu_para", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">14</p></body></html>", nullptr));
        te_check_number->setHtml(QApplication::translate("rtu_para", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">8</p></body></html>", nullptr));
        te_PT_Ratio->setHtml(QApplication::translate("rtu_para", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">7</p></body></html>", nullptr));
        te_CT_Ratio->setHtml(QApplication::translate("rtu_para", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">9</p></body></html>", nullptr));
        pb_add->setText(QApplication::translate("rtu_para", "\345\242\236\345\212\240", nullptr));
        pb_save->setText(QApplication::translate("rtu_para", "\344\277\235\345\255\230", nullptr));
        pb_delete->setText(QApplication::translate("rtu_para", "\345\210\240\351\231\244", nullptr));
        pb_previous->setText(QApplication::translate("rtu_para", "\344\270\212\344\270\200\344\270\252", nullptr));
        pb_next->setText(QApplication::translate("rtu_para", "\344\270\213\344\270\200\344\270\252", nullptr));
        lb_record_page->setText(QString());
        label_26->setText(QApplication::translate("rtu_para", "\347\254\254", nullptr));
        label_27->setText(QApplication::translate("rtu_para", "\350\256\260", nullptr));
        label_28->setText(QApplication::translate("rtu_para", "\345\275\225", nullptr));
        Q_UNUSED(rtu_para);
    } // retranslateUi

};

namespace Ui {
    class rtu_para: public Ui_rtu_para {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTU_PARA_H
