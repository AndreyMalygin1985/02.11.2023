#include<iostream>
#include<Windows.h>
#include"Human.h"
#include"Date.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	Date birthday(17, 05, 1985);
	Human x(1, "�������", "������", "����������", birthday);
	Human y{x};

	cout << "Ok"<<endl;


	return 0;
}