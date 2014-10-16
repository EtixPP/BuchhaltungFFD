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