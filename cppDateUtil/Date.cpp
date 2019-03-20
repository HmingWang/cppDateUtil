#include "Date.h"



Date::Date()
{
	_year = 1900;
	_month = 0;
	_day = 0;
}

Date::Date(int year, int month, int day)
{
	this->_year = year;
	this->_month = month;
	this->_day = day;
}

Date::Date(const Date & date)
{
	this->_year = date._year;
	this->_month = date._month;
	this->_day = date._day;
}


Date Date::operator+(const Date &)
{
	// TODO: �ڴ˴����� return ���
}

Date Date::operator-(const Date &)
{
	// TODO: �ڴ˴����� return ���
	return *this;
}

Date Date::AddDay(int n)
{
	if (n < 0)
	{
		return *this - (-n);
	}
	Date tmpDate(*this);//����thisָ��

	tmpDate._day += n;
	while (tmpDate._day > DateUtil::GetMonthDayNum (_year, _month))
	{
		tmpDate._day = tmpDate._day - DateUtil::GetMonthDayNum(tmpDate._year, tmpDate._month);
		tmpDate._month += 1;
		if (tmpDate._month > 12)
		{
			++tmpDate._year;
			tmpDate._month = 1;
		}
	}
	return tmpDate;
}

Date Date::SubDay(int)
{
	// TODO: �ڴ˴����� return ���
}

Date Date::AddMonth(int)
{
	// TODO: �ڴ˴����� return ���
}

Date Date::SubMonth(int)
{
	// TODO: �ڴ˴����� return ���
}

Date Date::AddYear(int)
{
	// TODO: �ڴ˴����� return ���
}

Date Date::SubYear(int)
{
	// TODO: �ڴ˴����� return ���
}

int Date::Diff(const Date & date)
{
	return 0;
}

Date & Date::operator=(const Date & date)
{
	this->_year = date._year;
	this->_month = date._month;
	this->_day = date._day;
	return *this;
}

bool Date::operator!=(const Date & date)
{
	return this->_year!=date._year||this->_month!=date._month||this->_day!=date._day;
}

bool Date::operator==(const Date & date)
{
	return this->_year == date._year&&this->_month == date._month&&this->_day == date._day;
}

Date & Date::operator-=(const Date & date)
{


}

Date & Date::operator+=(const Date &)
{
	// TODO: �ڴ˴����� return ���
}




Date::~Date()
{
}
