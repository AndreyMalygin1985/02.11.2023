#include<iostream>
#include<Windows.h>
#include"Human.h"
#include"Date.h"

using namespace std;

unsigned int Human::count_instance = 1;

int main()
{
	SetConsoleOutputCP(1251);

	Date birthday(17, 05, 1985);
	Human x("�������", "������", "����������", birthday);
	Human y{x};
	y.setFirstName("�����");
	cout << "���������: " << Human::getCountIntance() << endl;

	x.showInfo();
	y.showInfo();


	return 0;
}