#pragma once

#include "Date.h"

static class DateUtil
{
public:
	DateUtil();
	~DateUtil();

	Date AddDay(const Date& date, int n);
	Date SubDay(const Date& date, int n);
	Date AddMonth(const Date& date, int n);
	Date SubMonth(const Date& date, int n);
	Date AddYear(const Date& date, int n);
	Date SubYear(const Date& date, int n);

	bool IsLeapYear(int year);
	int GetMonthDayNum(int year,int month);
	int Diff(const Date& date1, const Date& date2);
	Date GetFirstDayOfMonth(const Date& date);
	Date GetLastDayOfMonth(const Date& date);

	Date GetFirstDayOfYear(const Date& date);
	Date GetLastDayOfYear(const Date& date);

};

