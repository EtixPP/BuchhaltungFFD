#pragma once
#include <string>
#include <iostream>
#include "months.h"
class date : public months
{
public:
	explicit date ( short p_day, short p_month, short p_year  );
	explicit date ( short p_hour, short p_day, short p_month, short p_year );
	explicit date ( short p_minute, short p_hour, short p_day, short p_month, short p_year );
	explicit date ( short p_second, short p_minute, short p_hour, short p_day, short p_month, short p_year );
	~date ( );
	bool operator > ( date& p_date ) const;
	bool operator < ( date& p_date ) const;
	bool operator == ( date& p_date ) const;
	short GetYear ( );
	short GetMonth ( );
	short GetDay ( );
	short GetHour ( );
	short GetMinute ( );
	short GetSecond ( );
private:
	std::size_t CalcTimestamp ( );
	short HowManyLeapYears ( short p_year);
	short m_second;
	short m_minute;
	short m_hour;
	short m_day;
	short m_month;
	short m_year;
	bool IsOlder ( date p_date ) const;
	bool IsYounger ( date p_date ) const;
	bool IsEqual ( date p_date ) const;
	std::size_t m_timestamp;
};

