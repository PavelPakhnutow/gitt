// git_task_2_prj.cpp

#include <iostream>
#include "class.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int n;
	funcs f;

	do
	{
		cout << "Set menu number" << endl;
		cout << "1) Sum" << endl;
		cout << "2) Sub" << endl;
		cout << "3) Mul" << endl;
		cout << "4) Div" << endl;
		cout << "0) EXIT" << endl << endl;
		cout << "Your number is: ";
		cin >> n;
		system("cls");

		switch (n)
		{
		case 1: 
		{
			cout << "Function sum" << endl;
			f.sum();
			break;
		}

		case 2: 
		{
			cout << "Function sub" << endl;
			f.sub(); 
			break;
		}
		case 3: 
		{
			cout << "3" << endl;
			system("pause");
			break;
		}
		case 4:
		{
			cout << "4" << endl;
			system("pause");
			break;
		}
		case 0: 
		{

			break;
		}
		default: 
		{

			system("pause");
		}
		}

	} while (n != 0); 

	return 0;
}