#include <iostream>
#include <cmath>
using namespace std;
double graph(double x)
{
	const double R = 1.0;
	if (x >= -3 && x <= -2) {
		// Линейный участок с наклоном 45° (y = x + 3)
		return x + 3;
	}
	else if (x > -2 && x <= -1) {
		// Участок дуги окружности (центр окружности (-2, 1), радиус 1)
		double value = R * R - pow(x + 2, 2);
		if (value < 0) return 0;
		return sqrt(value) + R;
	}
	else if (x > -1 && x <= 1) {
		// Прямая линия, параллельная оси X (y = 1)
		return 1;
	}
	else if (x > 1 && x <= 2) {
		// Линейный участок от (1, 1) до (2, -1)
		return -2 * (x - 1) + 1;
	}
	else if (x > 2) {
		// Прямая линия, параллельная оси X (y = -1)
		return -1;
	}
	return 0;
}
int function(int num)
{
	if (num % 7 == 0) {
		return num / 7;
	}
	else {
		return num + 7;
	}
}
void delitel(int n, int divisor = 2)
{
	if (n <= 1) return;
	if (n % divisor == 0)
	{
		cout << divisor << ", ";
		delitel(n / divisor, divisor);
	}
	else {
		delitel(n, divisor + 1);
	}
}
void task1()
{
	double x_start = -3.0, x_end = 5.0, dx = 0.1;
	double y, R = 1;

	cout << "x\t\ty" << endl;
	cout << "------------------" << endl;
	for (double x = x_start; x <= x_end; x += dx)
	{
		double y = graph(x);
		cout << x << "\t" << y << endl;

	}
}
void task2()
{
	int number;
	cout << "Введите число: " << endl; cin >> number;
	int result = function(number);
	cout << "Измененное число: " << result << endl;

}
void task3()
{
	int n;
	cout << "Введите натуральное число n>1: "; cin >> n;
	cout << "Простые делители числа " << n << ": ";
	delitel(n);
	cout << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int task;
	int number;
	while (true)
	{
		cout << "Введите номер задания (0 для выхода): " << endl;
		cin >> task;
		if (task == 0)
		{
			break;
		}
		switch (task)
		{
		case 1:
		{
			task1();
			break;
		}
		case 2:
		{
			task2();
			break;
		}
		case 3:
		{
			task3();
			break;
		}
		default:
			cout << "Введен неверный номер задания " << endl;
		}
	}
	cout << "Программа завершена." << endl;
	return 0;
}