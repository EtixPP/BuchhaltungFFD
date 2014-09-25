#include "booking.h"
#include <iostream>
booking::booking(std::string p_title, std::string p_notice, category p_category, person p_person,booking::Type p_type):
m_type{ p_type },
m_title{ p_title },
m_notice{ p_notice },
m_person{ p_person },
m_category{ p_category }
{
	
}

booking::~booking()
{
}