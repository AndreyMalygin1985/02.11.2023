#include "Human.h"

using namespace std;

void Human::showInfo()
{
	cout << "ID: " << id << endl;
	cout << "���: " << surname << " " << first_name << " " << last_name << endl;
	cout << "�����: ";
	birthday.show();
	cout << endl;
}

