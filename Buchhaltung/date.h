#pragma once
#include <string>
class date
{
public:
	explicit date ( short p_day, short p_month, short p_year  );
	explicit date ( short p_hour, short p_day, short p_month, short p_year );
	explicit date ( short p_minute, short p_hour, short p_day, short p_month, short p_year );
	explicit date ( short p_second, short p_minute, short p_hour, short p_day, short p_month, short p_year );
	~date ( );

private:
	short m_second;
	short m_minute;
	short m_hour;
	short m_day;
	short m_month;
	short m_year;
};

