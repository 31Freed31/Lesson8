#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    cout << "Укажите размер файла для скачивания: ";
    float size;
    cin >> size;

    cout << "Какова скорость вашего соединения?: ";
    float speed;
    cin >> speed;

    float result = 0.0f;
    int seconds = 0;

    while (result < size)
    {
        result += speed;
        seconds++;
        if (result > size)
            result = size;

        int percentage = (result * 100) / size;

        cout << "Прошло " << seconds << " сек. Скачено " << result << " из "
            << size << " МБ (" << percentage << "%)" << endl;
    }

    cout << "Скачивание завершено." << endl;
}
