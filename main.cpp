#include "NumPadLogInDialog.h"
#include "MainWindow.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    NumPadLogInDialog numPadLogIn;
    int numPadLogInResult;
    do {
        numPadLogInResult = numPadLogIn.exec();
        if (numPadLogInResult == QDialog::Rejected) {
            QMessageBox::warning(&numPadLogIn,
                "Advertencia", "Código incorrecto");
        }
    } while (numPadLogInResult == QDialog::Rejected);
    MainWindow window;
    window.show();
    return a.exec();
}
