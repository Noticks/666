// 3
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double distance, fuelConsumption, price1, price2, price3;

	cout << "������� ���������� (��): ";
	cin >> distance;
	cout << "������� ������ ������� �� 100 ��: ";
	cin >> fuelConsumption;
	cout << "������� ���� ������� 1-�� ���� (�� ����): ";
	cin >> price1;
	cout << "������� ���� ������� 2-�� ���� (�� ����): ";
	cin >> price2;
	cout << "������� ���� ������� 3-�� ���� (�� ����): ";
	cin >> price3;

	double cost1 = (distance * fuelConsumption / 100) * price1;
	double cost2 = (distance * fuelConsumption / 100) * price2;
	double cost3 = (distance * fuelConsumption / 100) * price3;

	cout << "\n������������� ������� ��������� �������:\n\n";
	cout << setw(15) << "��� �������" << setw(15) << "��������� (���.)" << endl;
	cout << setw(15) << "1-� ���" << setw(15) << fixed << setprecision(2) << cost1 << endl;
	cout << setw(15) << "2-� ���" << setw(15) << fixed << setprecision(2) << cost2 << endl;
	cout << setw(15) << "3-� ���" << setw(15) << fixed << setprecision(2) << cost3 << endl;

	return 0;
}