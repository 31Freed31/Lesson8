#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    float initial_amplitude, final_amplitude;

    cout << "Введите начальную амплитуду (в см): ";
    cin >> initial_amplitude;
    cout << "Введите амплитуду остановки (в см): ";
    cin >> final_amplitude;

    int oscillations = 0;
    float current_amplitude = initial_amplitude;

    while (current_amplitude > final_amplitude) {
        current_amplitude -= current_amplitude * 0.084;
        oscillations++;
    }

    cout << "Маятник остановится после " << oscillations << " качаний." << endl;
}