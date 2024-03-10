#include <iostream>
#include<conio.h>
using namespace std;
//#define CALC_1
//#define CALC_2

void main()
{
	setlocale(LC_ALL, "");
	double a, b;
	char s;
	cout << "введите выражение:"; cin >> a >> s >> b;
#ifdef CALC_1
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;

	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;

	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;

	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;

	}
	else
	{
		cout << "Error: no operatoin" << endl;

	}

#endif // CALC_1
#ifdef CALC_1
	switch (s)
	{
	case'+':cout << a << " + " << b << " = " << a + b << endl; break;
	case'-':cout << a << " - " << b << " = " << a - b << endl; break;
	case'*':cout << a << " * " << b << " = " << a * b << endl; break;
	case'/':
		if (b != 0) cout << a << " / " << b << " = " << a / b << endl;
		else cout << "Error: Division by zero" << endl;
		break;

	default: cout << "Error: No operation" << endl;

	}
	main();

#endif // CALC_1

	
}

