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
	// TODO: 在此处插入 return 语句
}

Date Date::operator-(const Date &)
{
	// TODO: 在此处插入 return 语句
	return *this;
}

Date Date::AddDay(int n)
{
	if (n < 0)
	{
		return *this - (-n);
	}
	Date tmpDate(*this);//拷贝this指针

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
	// TODO: 在此处插入 return 语句
}

Date Date::AddMonth(int)
{
	// TODO: 在此处插入 return 语句
}

Date Date::SubMonth(int)
{
	// TODO: 在此处插入 return 语句
}

Date Date::AddYear(int)
{
	// TODO: 在此处插入 return 语句
}

Date Date::SubYear(int)
{
	// TODO: 在此处插入 return 语句
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
	// TODO: 在此处插入 return 语句
}




Date::~Date()
{
}
