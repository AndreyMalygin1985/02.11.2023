#pragma once
#include"Date.h"
#include<iostream>

class Human {
	static unsigned int count_instance;
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
		count_instance++;
	};

	Human() : Human(0, nullptr, nullptr, nullptr, Date()) {}

	Human(const Human& obj) : id{ obj.id },						//конструктор копирования
		surname{ obj.surname ? new char[strlen(obj.surname) + 1] : nullptr },
		first_name{ obj.first_name ? new char[strlen(obj.first_name) + 1] : nullptr },
		last_name{ obj.last_name ? new char[strlen(obj.last_name) + 1] : nullptr },
		birthday{ obj.birthday }
	{
		if (surname && first_name && last_name)
		{
			strcpy_s(this->surname, strlen(obj.surname) + 1, obj.surname);
			strcpy_s(this->first_name, strlen(obj.first_name) + 1, obj.first_name);
			strcpy_s(this->last_name, strlen(obj.last_name) + 1, obj.last_name);
		}
		count_instance++;
	}
	~Human()			//деструктор
	{
		delete[] surname;
		delete[] first_name;
		delete[] last_name;
		count_instance--;
	}

	static unsigned int getCountIntance()
	{
		return count_instance;
	}

};

unsigned int Human::count_instance = 0;