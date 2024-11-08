#include <iostream>
using namespace std;
void task1()
{
	long int value2, value1=200000;
	long* yk;
	yk = &value1;
	cout << *yk << endl;
	value2 = *yk;
	cout << value2 << endl;
	cout << &value1 << endl;
	cout << yk << endl;
}
void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;

}
void task2()
{
	int a, b;
	cout << "Введите значение a и b: " << endl; cin >> a >> b;
	cout << "a=" << a << " b=" << b << endl;
	swap(a, b);
	cout << "a=" << a << " b=" << b << endl;
}
void vychitanie(int& n)
{
	int count = 0;
	while (n != 0)
	{
		int temp = n;
		int sum = 0;
		while (temp != 0)
		{
			sum += temp % 10;
			temp /= 10;
		}
		n -= sum;
		count++;
	}
	cout << "Количесвто вычитаний = " << count << endl;
}
void task3()
{
	int chislo;
	cout << "Введите число: " << endl; cin >> chislo;
	vychitanie(chislo);
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int task;
	while (true)
	{
		cout << "Введите номер задания (0 для выхода) " << endl; cin >> task;
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
		case 3 :
		{
			task3();
			break;
		}
		default:
			cout << "Неверный номер задания! " << endl;
		}


	}
	cout << "Программа завершена. " << endl;
	return 0;
}
/*
В задании 2 из представленных варинатов не правильно решает задачу первый пример, так как функция принимает параметры по значению, 
что означает создание локальных копий x и y внутри функции swap. Изменения произведенные в этих локальных копиях не отразяться на переменных
a и b
2 и 3 примеры правильно решают задачу, но боллее предпочтительный вариант 3, т.к. он более читаем и не требует работы с 
указателями, что делает код проще
 */
//в задании 3 программа показывает, как работают указатели и операции взятия адреса и разыменования в C++.