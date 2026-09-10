// Лабораторная работа № 1. Вариант 25.
// Выполнил: Лацкова С. А., группа пи-52.
#include <iostream>
#define g 9.81
using namespace std;
// ===== Расчётные функции варианта =====
// Потенциальная энергия
double potentialEnergy(double m, double h) {
	if (m < 0)throw invalid_argument("Масса не может быть отрицательной!");
	return m * h * g;
}

//Высота
heightFromEnergy(double E, double m) {
	if (m = < 0)throw invalid_argument("Масса не может быть отрицательной или равной нулю!");
	return E / (m * g);
}

// ===== Главная функция: меню =====
int main() {
	int choice;
	double m, h, E;
	do {
		cout << "\n=== Вариант 25: Расчет потенциальной энергии ===\n";
		cout << "1. Потенциальная энергия\n";
		cout << "0. Выход\n";
		cout << "2. Высота\n";
		cout << "--------------------------------------------------\n";
		cout << "Выберите пункт: ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Введите массу m в кг. и высоту h в м.: ";
			cin >> m >> h;
			try {
				double result = potentialEnergy(m, h)
					cout << " Потенциальная энергия = " << result << "Дж\n";
			}
			catch (const invalid_argument& e) {
				cerr << e.what() << "\n";
			}
			break;
		case 2:
			cout << "Введите энергию E в Дж. и массу m в кг.: ";
			cin >> E >> m;
			try {
				double result = heightFromEnergy(E, m);
				cout << " Высота = " << result << "м\n";
			}
			catch (const invalid_argument& e) {
				cerr << e.what() << "\n";
			}
			break;
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}






