#include <iostream>
using namespace std;
//#define task1
//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define TRIANGLE_6
//#define PIFAGOR
//#define ROMB
//#define peremenye

void main()
{
	setlocale(LC_ALL, "");


	//int n; 

	//cout << "введиет количество звездочек:"; cin >> n;


#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "*";
		}
		cout << endl;
	}

#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << " ";
		for (int j = i; j < n; j++)cout << "*";
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "* ";
		for (int j = i; j < n; j++)cout << " ";


		cout << endl;
	}
#endif // TRIANGLE_4

#ifdef TRIANGLE_6
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (i % 2 == j % 2 == 0)cout << "+";
			else cout << "-";
		cout << endl;

	}
#endif // TRIANGLE_6

#ifdef PIFAGOR
	for (int i = 1; i < 10; i++)
	{

		for (int j = 1; j < 10; j++)
		{
			if (i * j < 10) cout << " ";
			cout << i * j << "\t ";

		}
		cout << "\n";
	}
#endif // PIFAGOR

#ifdef ROMB

	for (int i = 0; i < n; i++)
	{
		{
			for (int j = i; j < n; j++) cout << " "; cout << "/";
			for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		{
			for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
			for (int j = i + 1; j < n; j++) cout << "  "; cout << "/";
		}
		cout << endl;
	}

#endif // ROMB



#ifdef peremenye
	int a;
	int b;
	cout << "введите число 1:"; cin >> a;
	cout << " введите число 2:"; cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << endl;
	cout << b << endl;

#endif // peremenye

	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{

		 }
	}
}
