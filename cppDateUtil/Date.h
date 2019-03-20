#pragma once
class Date
{
public:

	int _year;
	int _month;
	int _day;

	Date();
	Date(int year, int month, int day);
	Date(const Date& date );

	Date& AddDay(int);
	Date& SubDay(int);

	Date& AddMonth(int);
	Date& SubMonth(int);

	Date& AddYear(int);
	Date& SubYear(int);

	int Diff(const Date&);
	Date& operator =(const Date&);

	bool operator != (const Date&);
	bool operator == (const Date&);
	Date& operator -= (const Date&);
	Date& operator += (const Date&);

	Date& operator + (const Date&);
	Date& operator - (const Date&);


	~Date();
};

