// 1
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double distance, time, speed;

    cout << "Введите расстояние до аэропорта (в километрах): ";
    cin >> distance;

    cout << "Введите время, за которое нужно доехать (в часах): ";
    cin >> time;

    if (time == 0) {
        cout << "Время не может быть равно нулю!\n";
        return 1;
    }

    speed = distance / time;

    cout << "Необходимая скорость: " << speed << " км/ч\n";

    return 0;
}