#pragma once
#include"Date.h"
#include<iostream>

class Human {
	int id;
	char* surname;
	char* first_name;
	char* last_name;
	Date birthday;

public:
	Human(int id, const char* surname, const char* first_name, const char* last_name, Date birthday) :
		id{ id },
		surname{ surname ? new char[strlen(surname) + 1] : nullptr },
		first_name{ first_name ? new char[strlen(first_name) + 1] : nullptr },
		last_name{ last_name ? new char[strlen(last_name) + 1] : nullptr },
		birthday{ birthday }
	{
		if (surname && first_name && last_name)
		{
			strcpy_s(this->surname, strlen(surname) + 1, surname);
			strcpy_s(this->first_name, strlen(first_name) + 1, first_name);
			strcpy_s(this->last_name, strlen(last_name) + 1, last_name);
		}
	};

	Human() :
};