#include<iostream>
#include<Windows.h>
#include"Human.h"
#include"Date.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	Date birthday((unsigned short)17, (unsigned short)05, (unsigned short)1985);
	Human x(1, "Малыгин", "Андрей", "Валерьевич", birthday);

}