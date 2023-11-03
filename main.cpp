#include<iostream>
#include<Windows.h>
#include"Human.h"
#include"Date.h"

using namespace std;
unsigned int Human::count_instance = 0;
int main()
{
	SetConsoleOutputCP(1251);

	Date birthday(17, 05, 1985);
	Human x(1, "Малыгин", "Андрей", "Валерьевич", birthday);
	Human y{x};

	cout << "Человеков: " << Human::getCountIntance() << endl;

	x.showInfo();


	return 0;
}