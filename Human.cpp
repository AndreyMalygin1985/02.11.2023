#include "Human.h"

using namespace std;

void Human::showInfo()
{
	cout << "ID: " << id << endl;
	cout << "ÔÈÎ: " << surname << " " << first_name << " " << last_name << endl;
	cout << "Äíþõà: ";
	birthday.show();
	cout << endl;
}

