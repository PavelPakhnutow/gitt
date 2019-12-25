#include "class.h"
#include <iostream>
using namespace std;

void funcs::sum()
{
	cout << "Input first number: ";
	cin >> first;
	cout << "Input second number: ";
	cin >> second;
	system("cls");
	result = first + second;
	cout << "Your result: " << first << " + " << second << " = " << result << endl;
	system("pause");
	system("cls");
}

void funcs::sub()
{
	cout << "Input first number: ";
	cin >> first;
	cout << "Input second number: ";
	cin >> second;
	system("cls");
	result = first - second;
	cout << "Your result: " << first << " - " << second << " = " << result << endl;
	system("pause");
	system("cls");
}