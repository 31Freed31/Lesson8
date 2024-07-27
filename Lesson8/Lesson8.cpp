#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    cout << "Введите массу звездолёта (m): ";
    float m;
    cin >> m;
    cout << endl;

    cout << "Введите силу тяги звездолёта (F): ";
    float f;
    cin >> f;
    cout << endl;

    cout << "Введите на сколько секунд (t): ";
    float t;
    cin >> t;
    cout << endl;

    float res = (f / m * pow(t, 2)) / 2;
    cout << "Результат: " << res;

}
