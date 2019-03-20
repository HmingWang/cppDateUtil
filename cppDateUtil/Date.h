#pragma once
class Date
{
	int _year;
	int _month;
	int _day;

public:
	Date();
	Date(int year, int month, int day);
	Date(const Date& date );
	~Date();
};

