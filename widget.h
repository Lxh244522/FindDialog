#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void findClicked();
    void enableFindButton(const QString &text);

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QLabel *lable;
    QLineEdit *lineEdit;
    QPushButton *findPushButton;
    QPushButton *closePushButton;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
};

#endif // WIDGET_H
