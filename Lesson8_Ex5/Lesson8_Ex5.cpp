#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    int kilometers;
    cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
    cin >> kilometers;

    int total_seconds = 0;

    for (int i = 1; i <= kilometers; ++i) {
        int seconds;
        cout << "Какой у тебя был темп на километре " << i << "? ";
        cin >> seconds;
        total_seconds += seconds;
    }

    int average_seconds = total_seconds / kilometers;
    int minutes = average_seconds / 60;
    int seconds = average_seconds % 60;

    cout << "Твой средний темп за тренировку: " << minutes << " минут "
        << seconds << " секунд." << endl;
}