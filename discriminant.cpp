#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "(+-)ax^2 (+-) bx (+-)c = 0";
	cout << endl;
	cout << endl;
	float a;
	float b;
	float c;
	cout << "Введите коэффицент a: \t";
	cin >> a;
	cout << "Введите коэффицент b: \t";
	cin >> b;
	cout << "Введите коэффицент c: \t";
	cin >> c;
	cout << endl;
	if (b < 0 && c < 0) {
		cout << a << "x^2" << b << "x" << c << " = 0";
	}
	if (b < 0 && c > 0) {
		cout << a << "x^2" << b << "x" << "+" << c << " = 0";
	}
	if (c < 0 && b > 0) {
		cout << a << "x^2" << "+" << b << "x" << c << " = 0";
	}
	if (b > 0 && c > 0) {
		cout << a << "x^2" << "+" <<  b << "x" << "+" << c << " = 0";
	}
	cout << endl;
	int discriminant =  pow(b, 2) - 4 * a * c;
	cout << "Дискриминант равен: " << discriminant;
	if (discriminant < 0) {
		cout << "Нет действительных корней";
	}
	cout << endl;
	int korDis = sqrt(discriminant);
	cout << "Корень из дискриминанта равен: " << korDis;
	cout << endl;
	float koren1 = (-b - korDis) / (2 * a);
	float koren2 = (-b + korDis) / (2 * a);
	if (discriminant == 0) {
		cout << "Если дискриминант равен нулю, значит уравнение имеет один корень (два равных)\n";
		cout << "Корень равен: " << koren1;
	}
	else {
		cout << "Первый корень равен: " << koren1;
		cout << endl;
		cout << "Второй корень равен: " << koren2;
	}
	cout << endl;
}
