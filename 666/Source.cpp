// 1
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double distance, time, speed;

    cout << "������� ���������� �� ��������� (� ����������): ";
    cin >> distance;

    cout << "������� �����, �� ������� ����� ������� (� �����): ";
    cin >> time;

    if (time == 0) {
        cout << "����� �� ����� ���� ����� ����!\n";
        return 1;
    }

    speed = distance / time;

    cout << "����������� ��������: " << speed << " ��/�\n";

    return 0;
}