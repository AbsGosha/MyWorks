#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int language;
	cout << "Choose language: " << endl;
	cout << "Выберите язык: " << endl;;
	cout << "1 - русский" << endl;
	cout << "2 - english" << endl;
	cin >> language;
	if (language == 2) {
		int check1;
		int check2 = 1;
		while (check2 == 1) {
			float number1;
			float number2;
			char action1;
			cout << "Enter fisrt number: ";
			cin >> number1;
			cout << "Enter action: ";
			cin >> action1;
			cout << "Enter second number: ";
			cin >> number2;
			switch (action1) {
			case '+':
				cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
				break;
			case '-':
				cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;;
				break;
			case '*':
				cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;;
				break;
			case '/':
				if (number1 != 0) {
					cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;;
					break;
				}
				else {
					cout << "Error!" << endl;
				}
			default:
				cout << "Incorrectly information!" << endl;;
			}
			cout << endl;
			cout << "Enter 1 for the continue ";
			cout << endl;
			cout << "Enter 0 for the exit ";
			cout << endl;
			cin >> check1;
			if (check1 == 1) {
				check2 == 1;
			}
			else {
				return 0;
			}
		}
	}
	else {
		int check3;
		int check4 = 1;
		while (check4 == 1) {
			float number3;
			float number4;
			char action2;
			cout << "Введите первое число: ";
			cin >> number3;
			cout << "Введите действие: ";
			cin >> action2;
			cout << "Введите второе число: ";
			cin >> number4;
			switch (action2) {
			case '+':
				cout << number3 << " + " << number4 << " = " << number3 + number4 << endl;
				break;
			case '-':
				cout << number3 << " - " << number4 << " = " << number3 - number4 << endl;;
				break;
			case '*':
				cout << number3 << " * " << number4 << " = " << number3 * number4 << endl;;
				break;
			case '/':
				if (number3 != 0) {
					cout << number3 << " / " << number4 << " = " << number3 / number4 << endl;;
					break;
				}
				else {
					cout << "Ошибка!" << endl;
				}
			default:
				cout << "Неправильно введены данные!" << endl;;
			}
			cout << endl;
			cout << "Введите 1 для продолжения ";
			cout << endl;
			cout << "Введите 0 для завершения";
			cout << endl;
			cin >> check3;
			if (check3 == 1) {
				check4 == 1;
			}
			else {
				return 0;
			}
		}
	}
}