#include <iostream>
#include <conio.h>
using namespace std;
//#define HARDCHESS
//#define CHESS
void main()
{
	setlocale(LC_ALL, " Russian");
	//int n, i, j, k, h;

#ifdef HARDCHESS
	cout << "введите размер доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif // HARDCHESS

	
	
#ifdef CHESS
	cout << "введите размер доски: ";  cin >> n;
	n += 2;
	setlocale(LC_ALL, ".866");
	for (i = 0; i < n; i++) {
		cout << "\t\t";
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1) {
				cout << (char)196;
			}
			else if (j == 0 || j == n - 1) {
				cout << (char)179;
			}
			else if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) {
				cout << (char)219;
			}
			else cout << (char)32;
		}
		cout << endl;
	}
#endif // CHESS


	
}
