// 2
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int startHour, startMinute, startSecond;
    cout << "¬ведите врем€ начала поездки (часы минуты секунды): ";
    cin >> startHour >> startMinute >> startSecond;

    int endHour, endMinute, endSecond;
    cout << "¬ведите врем€ окончани€ поездки (часы минуты секунды): ";
    cin >> endHour >> endMinute >> endSecond;

    int startTime = startHour * 3600 + startMinute * 60 + startSecond;
    int endTime = endHour * 3600 + endMinute * 60 + endSecond;

    if (endTime <= startTime) {
        cout << "¬рем€ окончани€ поездки должно быть больше времени начала." << endl;
        return 1;
    }

    int duration = endTime - startTime;

    double cost = duration / 60.0 * 2;

    cout << "—тоимость поездки: " << cost << " гривен." << endl;

    return 0;
}