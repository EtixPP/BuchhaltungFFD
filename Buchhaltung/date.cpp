#pragma once
#include "date.h"
#include <string>

date::date ( short p_day, short p_month, short p_year ):
m_day {p_day },
m_month {p_month },
m_year {p_year }
{
}
date::date ( short p_hour, short p_day, short p_month, short p_year ):
m_hour { p_hour },
m_day { p_day },
m_month { p_month },
m_year { p_year }
{
}
date::date ( short p_minute, short p_hour, short p_day, short p_month, short p_year ):
m_minute { p_minute },
m_hour { p_hour },
m_day { p_day },
m_month { p_month },
m_year { p_year }
{
}
date::date ( short p_second, short p_minute, short p_hour, short p_day, short p_month, short p_year ):
m_second { p_second },
m_minute { p_minute },
m_hour { p_hour },
m_day { p_day },
m_month { p_month },
m_year { p_year }
{
}

date::~date ( )
{
}
