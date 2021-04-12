#ifndef NUMPADLOGINDIALOG_H
#define NUMPADLOGINDIALOG_H

#include <QDialog>

namespace Ui
{
class NumPadLogInDialog;
}

class NumPadLogInDialog : public QDialog
{
    Q_OBJECT
public:
    explicit NumPadLogInDialog(QWidget *parent = nullptr);
    ~NumPadLogInDialog();
protected:
#if defined(MY_DEBUG)
    void resizeEvent(QResizeEvent *e) override;
#endif
private slots:
    void on_clearPushButton_clicked();
    void on_enterPushButton_clicked();
    void onKeyWasClicked(const QString &number);
private:
    void resizeKey(QPushButton *key, const QSize &size) const;
    void connectKeys();

    Ui::NumPadLogInDialog *ui;
};

#endif // NUMPADLOGINDIALOG_H
