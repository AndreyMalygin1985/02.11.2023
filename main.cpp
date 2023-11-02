#include<iostream>
#include<Windows.h>
#include"Human.h"
#include"Date.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	Date birthday((unsigned short)17, 05, 1985);
	Human x(1, "Малыгин", "Андрей", "Валерьевич", birthday);
	Human y();

	cout << "Ok"<<endl;


	return 0;
}