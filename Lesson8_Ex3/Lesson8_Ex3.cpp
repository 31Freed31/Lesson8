#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    float cube_size = 5.0;

    float x, y, z;
    cout << "Введите размеры бруска (X Y Z): ";
    cin >> x >> y >> z;

    int num_cubes_x = floor(x / cube_size);
    int num_cubes_y = floor(y / cube_size);
    int num_cubes_z = floor(z / cube_size);

    int total_cubes = num_cubes_x * num_cubes_y * num_cubes_z;

    cout << "Из этого бруска можно изготовить " << total_cubes << " кубиков." << endl;

    int max_cubes_in_set = 0;
    int i = 1;
    while (i * i * i <= total_cubes)
    {
        max_cubes_in_set = i * i * i;
        i++;
    }

    if (max_cubes_in_set >= 8)
    {
        cout << "Из них можно составить набор из " << max_cubes_in_set << " кубиков." << endl;
    }
    else
    {
        cout << "Из них нельзя составить набор из 8 и более кубиков." << endl;
    }
}