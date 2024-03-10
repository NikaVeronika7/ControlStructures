#include <iostream>
#include <conio.h>
#include<ctime>
using namespace std;

//#define CALL
//#define SHOOTER1//  
//#define SHOOTER2
//#define Tab_umnozenia
//#define Siply_numbers
//#define mulyplication_TABLE

void main()

{
	setlocale(LC_ALL, "");

#ifdef CALL
	double a;
	double b;
	char s;
	cout << "введите выражение:"; cin >> a >> s >> b;
	if (s == '+')
		cout << a << "+" << b << "=" << a + b << endl;
	else if (s == '-')
		cout << a << "-" << b << "=" << a - b << endl;
	else if (s == '*')
		cout << a << "*" << b << "=" << a * b << endl;
	else if (s == '/')
		cout << a << "/" << b << "=" << a / b << endl;
	else
		cout << "error:no operation" << endl;

	main();
#endif // CALL

#ifdef SHOOTER1
	char key;
	do
	{
		key = _getch();

		if (key == 'w')
			cout << "вперед" << endl;
		else if (key == 'a')
			cout << "налево" << endl;
		else if (key == 'd')
			cout << "направо" << endl;
		else if (key == 'x')
			cout << "назад" << endl;
		else if (key == 32)
			cout << "прыжок" << endl;
		else if (key == 13)
			cout << "огонь" << endl;
		else if (key == 27)
			cout << "выход" << endl;
		else
			cout << "error" << endl;
	} while (true);

#endif // SHOOTER1

#ifdef SHOOTER2
	char key;
	key = _getch();

	switch (key)
	{
		case char(119) : cout << "вперед" << endl; break;
			case char(97) : cout << "налево" << endl; break;
				case char(100) : cout << "направо" << endl; break;
					case char(120) : cout << "назад" << endl; break;
						case char(13) : cout << "огонь" << endl; break;
							case char(32) : cout << "прыжок" << endl; break;
								case char(27) : cout << "выход" << endl; break;
								default:cout << "Error" << endl;

	}
	main();
#endif // SHOOTER2

#ifdef Tab_umnozenia
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << "\n\n";
	}
#endif // Tab_umnozenia


#ifdef Siply_numbers
	int n;
	cout << "введите предельное число:"; cin >> n;
	int simplex_counter = 0;

	for (int i = 0; i <= n; i++)
	{
		bool simple = true;// предположим число простое, но это нужно проверить
		for (int j = 2; j < i / 2; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple) simplex_counter++;

		//cout <<simplex_counter++, i << "\t";

	}


	cout << endl;
	cout << "Amount of simplex numbers:" << simplex_counter << endl;




#endif // Siply_numbers
	
#ifdef mulyplication_TABLE
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на" << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10) cout << " ";
			cout << i << "*";
			if (j < 10)cout << " ";
			cout << j << "=";
			if (i * j < 100)cout << " ";
			if (i * j < 10) cout << " ";
			cout << i * j << endl;
		}
#endif // mulyplication_TABLE

		/*for (int i = 1; i <= 10; i++)
		{
						cout << i << "\t";
		}
		for (int j = 1; j <= 10; j++)
		{
			if (j <= 10)cout << "\t";

		}
			cout << i * j << endl;
		*/
		;
		




