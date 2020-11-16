// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stdio.h"
#include "windows.h"
#include "math.h" 
#include "cmath"

using namespace std;

int main()
{
	double a, x, y, al;
	printf("input X: ");
	scanf_s("%lf", &x);
	printf("input Y: ");
	scanf_s("%lf", &y);
	printf("input al: ");
	scanf_s("%lf", &al);
	a = (1 + (pow(sin(x), 2))) / (2 + abs((y - 3 * y) / (1 + (pow(x, 3)) * (pow(y, 2)))) + ((sqrt(x)) / (pow((x - y), 1 / 3))));
	printf("\na=");
	printf("%e", a);
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