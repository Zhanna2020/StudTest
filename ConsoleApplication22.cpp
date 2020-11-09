// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "windows.h"
#include "cmath"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double f, x, a, b,c;
	cout << "Введіть x: ";
	cin >> x;
	cout << "Введіть a: ";
	cin >> a;
	cout << "Введіть b: ";
	cin >> b;
	cout << "Введіть c: ";
	cin >> c;

	if ((c+b<0) && (b != 0)&& (c!=0))
	{
		f = (5 * pow(x, 2)) + ((10 * b) / 3);
	}
	else if ((c+b>0) && (b = 0 )&& (x!= pow(c,2)))
	{
		f=(pow(b,3)-a)/(x-pow(c,2));
	}
	else
	{
		f=x/(5*c);
	}
	cout << "f="<<f<<endl;
	cout << "Закінчити роботу програми";
	}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
