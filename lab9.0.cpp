//Разработать программу, реализующую рекурсивную функцию подсчета количества всех положительных делителей 
//натурального числа n.
#include <iostream>
#include <Windows.h>

using namespace std;

int dn(unsigned n, unsigned x)
{
	int answer;
	if (x == 1)                           
	{
		return 1;
	}
	answer = dn(n, x - 1);               
	if (n % x == 0 && x > 1)
		return ++answer;
	if (n % x != 0 && x > 1)
		return answer;
	
	
}
int main(void)
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	unsigned int n;
	while (1)
	{
		cout << "Введите положительное число или 0 для выхода: ";
		cin >> n;
		if (n == 0) return 0;
		if (n <= 0)
		{
			cout << "Некорректный выбор. " << endl;
			continue;
		}
		cout <<  "Количество делителей: " << dn(n, n) << endl;
	}
}