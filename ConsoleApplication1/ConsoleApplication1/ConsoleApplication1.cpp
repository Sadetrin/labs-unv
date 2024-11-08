#include <iostream>
using namespace std;




int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, D, x1, x2;
    do {
        cout << "Введи значение a, b, c : " << endl;
        cin >> a >> b >> c;
        if (a == 0)
        {
            cout << "Введено не приемлимое значение, повторите попытку " << endl;
        }
    } while (a == 0);
    D = b * b - 4 * a * c;
    if (D == 0)
    {
        x1 = -b / (2 * a);
        cout << "Уравнение имеет один корень: " << x1 << endl;

    }
    else if (D < 0) {
        cout << "Действительных корней нет" << endl;

    }
    else {
        x1 = (-b - sqrt(D)) / (2 * a);
        x2 = (-b + sqrt(D)) / (2 * a);
        cout << "Уравнение имеет два корня: " << endl << x1 << endl << x2 << endl;
    };