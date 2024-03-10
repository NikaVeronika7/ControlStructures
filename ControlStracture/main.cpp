#include <iostream>
#include<conio.h>
using namespace std;
//#define IF_ELSE
//#define WHILE_1
//#define WHILE_2
#define Escape 27



void main()
{
	setlocale(LC_ALL, "");
#ifdef IF_ELSE
	int temperature;
	cout << "введите температуру воздуза:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "на улице тепло" << endl;
	}

	else
	{
		cout << "на улице холодно" << endl;
	}
#endif // IF_ELSE


#ifdef WHILE_1
	int i = 0;
	int n;
	cout << "введите количество итераций:"; cin >> n;
	while (i++ < n)
	{
		cout << "Hello World\n";
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "введите количесвто интераций:"; cin >> n;
	while (n--)
	{
		cout << "HELLO WORLD" << endl;
	}
	cout << n << endl;
#endif // WHILE_2

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);



}