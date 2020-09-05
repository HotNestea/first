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
		cout << "Enter a number or 0 fo exit: ";
		cin >> n;
		if (n == 0) return 0;
		if (n <= 0)
		{
			cout << "Wrong choice. " << endl;
			continue;
		}
		cout <<  "Amount: " << dn(n, n) << endl;
	}
}