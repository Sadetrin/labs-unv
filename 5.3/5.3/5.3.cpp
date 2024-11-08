#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, f;
	cout << "Введите значение x: " << endl;
	cin >> x;
	if (x <= 3)
	{
		f = 2 * x + 3;
		cout << "Значение функции f(x): " << f << endl;
	}
	else if (x > -3 && x < 0.5)
	{
		f = -7;
		cout << "Значение функции f(x): " << f << endl;
	}
	else if(x>=5)
	{
		f = (x*x)/5;
		cout << "Значение функции f(x): " << f << endl;
	}


	return 0;
}