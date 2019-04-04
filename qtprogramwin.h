#ifndef QTPROGRAMWIN_H
#define QTPROGRAMWIN_H

#include <QMainWindow>
#include <QAbstractButton>

namespace Ui {
class QtProgramWin;
}

class QtProgramWin : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit QtProgramWin(QWidget *parent = 0);
    ~QtProgramWin();
    
private:
    Ui::QtProgramWin *ui;

private slots:
	void digit_pressed();
	void digit_pressed(QAbstractButton*);
	void binary_operation_pressed();
	void binary_operation_pressed(char op);
	void on_pushButton_equals_released();
	void on_pushButton_clear_released();
	void keyPressEvent(QKeyEvent * event);
	int converttoDecimal(int oct);
	int converttoOctal(int dec);
};

#endif // QTPROGRAMWIN_H
