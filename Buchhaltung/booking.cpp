#include "booking.h"
#include <iostream>
booking::booking (  const std::string p_title,  const std::string p_notice,  const category p_category,  const person p_person,  const booking::Type p_type,  const double p_value ) :
m_type{ p_type },
m_title{ p_title },
m_notice{ p_notice },
m_person{ p_person },
m_category{ p_category },
m_value { p_value }
{
	std::cout << "Booking was created" << std::endl;
}

booking::~booking()
{
}
