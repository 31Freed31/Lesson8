#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    cout << "Введите колличество здоровья Орка: ";
    float health;
    cin >> health;
    cout << endl;

    cout << "Введите сопротивляемость магии Орка: ";
    float magic;
    cin >> magic;
    cout << endl;

    while (health > 0)
    {
        cout << endl;
        cout << "С каким уроном вы стрельнете в Орка?: ";
        float damage;
        cin >> damage;
        cout << endl;

        float effectiveDamage = damage * (1 - magic);
        health -= effectiveDamage;

        cout << "Урон: " << damage << " , сопротивляемость: " << magic << " по Орку будет нанесено "
            << effectiveDamage << " урона " << " Оставшееся здоворье: " << health << endl;

        if (health <= 0)
        {
            cout << "Орк умер" << endl;
            break;
        }
    }
}