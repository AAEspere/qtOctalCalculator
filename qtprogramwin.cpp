#include "qtprogramwin.h"
#include "ui_qtprogramwin.h"
#include <QKeyEvent>

int firstNum;
bool userSecondNumber = false;

QtProgramWin::QtProgramWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtProgramWin)
{
    ui->setupUi(this);
	connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(digit_pressed()));

	//operations
	connect(ui->pushButton_add, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui->pushButton_sub, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui->pushButton_mul, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui->pushButton_div, SIGNAL(released()), this, SLOT(binary_operation_pressed()));

	ui->pushButton_add->setCheckable(true);
	ui->pushButton_sub->setCheckable(true);
	ui->pushButton_mul->setCheckable(true);
	ui->pushButton_div->setCheckable(true);
}

QtProgramWin::~QtProgramWin()
{
    delete ui;
}

void QtProgramWin::digit_pressed()
{
	QPushButton * button = (QPushButton*)sender();

	int labelNUM;
	QString labelNEW;

	if ((ui->pushButton_add->isChecked() || ui->pushButton_sub->isChecked() ||
		ui->pushButton_mul->isChecked() || ui->pushButton_div->isChecked()) && (!userSecondNumber)) 
	{
		labelNUM = button->text().toInt();
		userSecondNumber = true;
	}
	else 
	{
		labelNUM = (ui->label->text() + button->text()).toInt();
	}

	labelNEW = QString::number(labelNUM,'g', 4);

	ui->label->setText(labelNEW);
}

//overloaded method for keyboard press
void QtProgramWin::digit_pressed(QAbstractButton* button)
{
	//QPushButton * button = (QPushButton*)sender();

	int labelNUM;
	QString labelNEW;

	if ((ui->pushButton_add->isChecked() || ui->pushButton_sub->isChecked() ||
		ui->pushButton_mul->isChecked() || ui->pushButton_div->isChecked()) && (!userSecondNumber))
	{
		labelNUM = button->text().toInt();
		userSecondNumber = true;
	}
	else
	{
		labelNUM = (ui->label->text() + button->text()).toInt();
	}

	labelNEW = QString::number(labelNUM, 'g', 4);

	ui->label->setText(labelNEW);
}

void QtProgramWin::on_pushButton_clear_released()
{
	ui->pushButton_add->setChecked(false);
	ui->pushButton_sub->setChecked(false);
	ui->pushButton_mul->setChecked(false);
	ui->pushButton_div->setChecked(false);

	userSecondNumber = false;

	ui->label->setText("0");
}

void QtProgramWin::on_pushButton_equals_released() 
{

	int labelNUM, secondNum;
	int sum, diff, product, quotient;
	QString labelNEW;

	secondNum = ui->label->text().toInt();
	int firstnumtemp = firstNum, secondnumtemp = secondNum;
	int decimalfirst = converttoDecimal(firstnumtemp), decimalsecond = converttoDecimal(secondnumtemp);

	if (ui->pushButton_add->isChecked())
	{
		sum = decimalfirst + decimalsecond;
		labelNUM = converttoOctal(sum);
		labelNEW = QString::number(labelNUM, 'g', 4);
		ui->label->setText(labelNEW);
		ui->pushButton_add->setChecked(false);
	}

	else if (ui->pushButton_sub->isChecked())
	{
		diff = decimalfirst - decimalsecond;
		labelNUM = converttoOctal(diff);
		labelNEW = QString::number(labelNUM, 'g', 4);
		ui->label->setText(labelNEW);
		ui->pushButton_sub->setChecked(false);
	}

	else if (ui->pushButton_mul->isChecked())
	{
		product = decimalfirst * decimalsecond;
		labelNUM = converttoOctal(product);
		labelNEW = QString::number(labelNUM, 'g', 4);
		ui->label->setText(labelNEW);
		ui->pushButton_mul->setChecked(false);
	}

	else if (ui->pushButton_div->isChecked())
	{
		quotient = decimalfirst / decimalsecond;
		labelNUM = converttoOctal(quotient);
		labelNEW = QString::number(labelNUM, 'g', 4);
		ui->label->setText(labelNEW);
		ui->pushButton_div->setChecked(false);
	}

	userSecondNumber = false;
}

int QtProgramWin::converttoDecimal(int oct)
{
	int decimal = 0, i1 = 0, rem1;
	while (oct != 0)
	{
		rem1 = oct % 10;
		oct /= 10;
		decimal += rem1 * pow(8, i1);
		++i1;
	}

	return decimal;
}

int QtProgramWin::converttoOctal(int dec) {
	
	int rem, i = 1, octal = 0;
	while (dec != 0)
	{
		rem = dec % 8;
		dec /= 8;
		octal += rem * i;
		i *= 10;
	}
	return octal;
}

void QtProgramWin::binary_operation_pressed()
{
	QPushButton * button = (QPushButton*)sender();

	firstNum = ui->label->text().toInt();

	button->setChecked(true);

}

//overloaded method for keyboard presses
void QtProgramWin::binary_operation_pressed(char op) 
{

	firstNum = ui->label->text().toInt();

	if (op == '+') {
		ui->pushButton_add->setChecked(true);
	}

	if (op == '-') {
		ui->pushButton_sub->setChecked(true);
	}

	if (op == '*') {
		ui->pushButton_mul->setChecked(true);
	}

	if (op == '/') {
		ui->pushButton_div->setChecked(true);
	}

}

//for keyboard shortcuts
void QtProgramWin::keyPressEvent(QKeyEvent * event)
{
	if (event->key() == Qt::Key_0) {
		digit_pressed(ui->pushButton_0);
	}
	if (event->key() == Qt::Key_1) {
		digit_pressed(ui->pushButton_1);
	}
	if (event->key() == Qt::Key_2) {
		digit_pressed(ui->pushButton_2);
	}
	if (event->key() == Qt::Key_3) {
		digit_pressed(ui->pushButton_3);
	}
	if (event->key() == Qt::Key_4) {
		digit_pressed(ui->pushButton_4);
	}
	if (event->key() == Qt::Key_5) {
		digit_pressed(ui->pushButton_5);
	}
	if (event->key() == Qt::Key_6) {
		digit_pressed(ui->pushButton_6);
	}
	if (event->key() == Qt::Key_7) {
		digit_pressed(ui->pushButton_7);
	}
	//operators
	if (event->key() == Qt::Key_Plus) {
		binary_operation_pressed('+');
	}
	if (event->key() == Qt::Key_Minus) {
		binary_operation_pressed('-');
	}
	if (event->key() == Qt::Key_Slash) {
		binary_operation_pressed('/');
	}
	if (event->key() == Qt::Key_Asterisk) {
		binary_operation_pressed('*');
	}
	//clear
	if (event->key() == Qt::Key_Backspace) {
		on_pushButton_clear_released();
	}
	if (event->key() == Qt::Key_Equal) {
		on_pushButton_equals_released();
	}
	if (event->key() == Qt::Key_Enter) {
		on_pushButton_equals_released();
	}
}