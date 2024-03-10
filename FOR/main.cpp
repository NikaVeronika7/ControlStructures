#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WHILE
//#define FOR
//#define FACTORIAL
//#define POWER
#define ASCII
//#define FIBONACCI_1
//#define FIBONACCI_2

void main()

{
	setlocale(LC_ALL, "");

#ifdef WHILE
	int i = 0;
	int n;
	cout << "введите количество итераций:"; cin >> n;
	while (i < n)
	{
		cout << "Hello\n";
		i++;



	}
#endif // WHILE

#ifdef FOR
	int n;
	cout << "введите количество интераций:"; cin >> n;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR


#ifdef FACTORIAL
	
	int n;
	cout << "введите число:"; cin >> n;
	int f=1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;

#endif // //FACTORIAL

#ifdef POWER
	double a; //основание степени
	int n; //показатель степени
	double N = 1; // степень(power)
	cout << "введите основание степени:"; cin >> a;
	cout << "введите показатель степени:"; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)

	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << "";

	}
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "введите предельное число:"; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;

#endif // FIBONACCI_1

}