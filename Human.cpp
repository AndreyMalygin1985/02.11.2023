#include "Human.h"

using namespace std;

char* Human::createName(char const* name)
{
	char* temp = new char[strlen(name)+1];
	strcpy_s(temp, strlen(name) + 1, name);
	return temp;
}

void Human::showInfo()
{
	cout << "ID: " << id << endl;
	cout << "���: " << surname << " " << first_name << " " << last_name << endl;
	cout << "�����: ";
	birthday.show();
	cout << endl;
}

