#include "DateUtil.h"



DateUtil::DateUtil()
{
}


DateUtil::~DateUtil()
{
}

Date DateUtil::AddDay(const Date & date, int n)
{
	return Date();
}

Date DateUtil::SubDay(const Date & date, int n)
{
	return Date();
}

Date DateUtil::AddMonth(const Date & date, int n)
{
	return Date();
}

Date DateUtil::SubMonth(const Date & date, int n)
{
	return Date();
}

Date DateUtil::AddYear(const Date & date, int n)
{
	return Date();
}

Date DateUtil::SubYear(const Date & date, int n)
{
	return Date();
}

bool DateUtil::IsLeapYear(int year)
{
	return year % 100 == 0 ? year % 400 == 0 : year % 4 == 0;
}

int DateUtil::GetMonthDayNum(int year,int month)
{
	int MonthDay[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (IsLeapYear(year) && month == 2)
	{
		return 29;
	}
	else 
	{
		return MonthDay[month];
	}

}

int DateUtil::Diff(const Date & date1, const Date & date2)
{
	return 0;
}

Date DateUtil::GetFirstDayOfMonth(const Date & date)
{
	return Date();
}

Date DateUtil::GetLastDayOfMonth(const Date & date)
{
	return Date();
}

Date DateUtil::GetFirstDayOfYear(const Date & date)
{
	return Date();
}

Date DateUtil::GetLastDayOfYear(const Date & date)
{
	return Date();
}
