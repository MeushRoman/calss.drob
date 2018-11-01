#include"drob_.h"
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	drob a(3, 2);
	cout << a;
	
	drob b;
	cin >> b;
	cout << b;
	system("pause");
}