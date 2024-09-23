// 2
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int startHour, startMinute, startSecond;
    cout << "������� ����� ������ ������� (���� ������ �������): ";
    cin >> startHour >> startMinute >> startSecond;

    int endHour, endMinute, endSecond;
    cout << "������� ����� ��������� ������� (���� ������ �������): ";
    cin >> endHour >> endMinute >> endSecond;

    int startTime = startHour * 3600 + startMinute * 60 + startSecond;
    int endTime = endHour * 3600 + endMinute * 60 + endSecond;

    if (endTime <= startTime) {
        cout << "����� ��������� ������� ������ ���� ������ ������� ������." << endl;
        return 1;
    }

    int duration = endTime - startTime;

    double cost = duration / 60.0 * 2;

    cout << "��������� �������: " << cost << " ������." << endl;

    return 0;
}