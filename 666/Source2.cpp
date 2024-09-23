// 3
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double distance, fuelConsumption, price1, price2, price3;

	cout << "Введите расстояние (км): ";
	cin >> distance;
	cout << "Введите расход топлива на 100 км: ";
	cin >> fuelConsumption;
	cout << "Введите цену бензина 1-го вида (за литр): ";
	cin >> price1;
	cout << "Введите цену бензина 2-го вида (за литр): ";
	cin >> price2;
	cout << "Введите цену бензина 3-го вида (за литр): ";
	cin >> price3;

	double cost1 = (distance * fuelConsumption / 100) * price1;
	double cost2 = (distance * fuelConsumption / 100) * price2;
	double cost3 = (distance * fuelConsumption / 100) * price3;

	cout << "\nСравнительная таблица стоимости поездки:\n\n";
	cout << setw(15) << "Вид бензина" << setw(15) << "Стоимость (руб.)" << endl;
	cout << setw(15) << "1-й вид" << setw(15) << fixed << setprecision(2) << cost1 << endl;
	cout << setw(15) << "2-й вид" << setw(15) << fixed << setprecision(2) << cost2 << endl;
	cout << setw(15) << "3-й вид" << setw(15) << fixed << setprecision(2) << cost3 << endl;

	return 0;
}