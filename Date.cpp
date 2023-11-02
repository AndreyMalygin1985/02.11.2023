#include "Date.h"

Date::Date(unsigned short dayP, unsigned short monthP, unsigned short yearP) :
	day{ 0 }, month{ 0 }, year{ 0 } 
{
	if (dayP >= 1 && dayP <= 31 && monthP >= 1 && monthP <= 12 && yearP >= 1) 
	{
		this->day = dayP;	
		this->month = monthP;	
		this->year = yearP;
	}

};

