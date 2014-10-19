#pragma once
#include "date.h"
#include <string>

date::date ( short p_day, short p_month, short p_year ):
m_day {p_day },
m_month {p_month },
m_year {p_year }
{
	m_timestamp = CalcTimestamp ( );
	std::cout << m_timestamp;
}
date::date ( short p_hour, short p_day, short p_month, short p_year ):
m_hour { p_hour },
m_day { p_day },
m_month { p_month },
m_year { p_year }
{
	m_timestamp = CalcTimestamp ( );
	std::cout << m_timestamp;
}
date::date ( short p_minute, short p_hour, short p_day, short p_month, short p_year ):
m_minute { p_minute },
m_hour { p_hour },
m_day { p_day },
m_month { p_month },
m_year { p_year }
{
	m_timestamp = CalcTimestamp ( );
	std::cout << m_timestamp;
}
date::date ( short p_second, short p_minute, short p_hour, short p_day, short p_month, short p_year ):
m_second { p_second },
m_minute { p_minute },
m_hour { p_hour },
m_day { p_day },
m_month { p_month },
m_year { p_year }
{
	m_timestamp = CalcTimestamp ( );
	std::cout << m_timestamp;
}


date::~date ( )
{
}

bool date::IsOlder ( date p_date ) const
{
	if ( m_year < p_date.GetYear ( ) )
		return false;
	else if ( m_month < p_date.GetMonth ( ) )
		return false;
	else if ( m_day < p_date.GetDay ( ) )
		return false;
	else if ( m_hour < p_date.GetHour ( ) )
		return false;
	else if ( m_minute < p_date.GetMinute ( ) )
		return false;
	else if ( m_second < p_date.GetSecond ( ) )
		return false;
	else if ( m_second == p_date.GetSecond ( ) && m_minute == p_date.GetMinute ( ) && m_hour == p_date.GetHour ( ) && m_day == p_date.GetDay ( ) && m_month == p_date.GetMonth ( ) && m_year == p_date.GetYear ( ) )
		return false;
	else
		return true;
}
bool date::IsYounger ( date p_date ) const
{
	if ( m_year > p_date.GetYear ( ) )
		return false;
	else if ( m_month > p_date.GetMonth ( ) )
		return false;
	else if ( m_day > p_date.GetDay ( ) )
		return false;
	else if ( m_hour > p_date.GetHour ( ) )
		return false;
	else if ( m_minute > p_date.GetMinute ( ) )
		return false;
	else if ( m_second > p_date.GetSecond ( ) )
		return false;
	else if ( m_second == p_date.GetSecond ( ) && m_minute == p_date.GetMinute ( ) && m_hour == p_date.GetHour ( ) && m_day == p_date.GetDay ( ) && m_month == p_date.GetMonth ( ) && m_year == p_date.GetYear ( ) )
		return false;
	else
		return true;
}
bool date::IsEqual ( date p_date ) const
{
	if ( m_second == p_date.GetSecond ( ) && m_minute == p_date.GetMinute ( ) && m_hour == p_date.GetHour ( ) && m_day == p_date.GetDay ( ) && m_month == p_date.GetMonth ( ) && m_year == p_date.GetYear ( ) )
		return true;
	else
		return false;
}

std::size_t date::CalcTimestamp ( )
{
	int l_monthseconds { 0 };
	for ( short i = 1; i < m_month + 1; i++ )
	{
		auto search = m_monthmap.find ( i );
		l_monthseconds += search->second * 3600 * 24;
	}
	return (((m_day * 86400) + (HowManyLeapYears(m_year) * 3600 * 24)) + l_monthseconds + (m_year * 355 * 3600 * 24) + (m_hour * 3600) + m_minute * 60 + m_second) ;
}

short date::HowManyLeapYears (short p_year )
{
	return ( ( p_year / 4 ) - ( p_year / 100 ) + ( p_year / 400 ) );
}



bool date::operator>(date& p_date ) const
{
	if ( this->IsOlder ( p_date ) )
		return true;
	else
		return false;
}

bool date::operator<( date& p_date ) const
{
	if ( this->IsYounger ( p_date ) )
		return true;
	else
		return false;
}

bool date::operator==( date& p_date ) const
{
	if ( this->IsEqual ( p_date ) )
		return true;
	else
		return false;
}













short date::GetYear ( )
{
	return m_year;
}
short date::GetMonth ( )
{
	return m_month;
}
short date::GetDay ( )
{
	return m_day;
}
short date::GetHour ( )
{
	return m_hour;
}
short date::GetMinute ( )
{
	return m_minute;
}
short date::GetSecond ( )
{
	return m_second;
}