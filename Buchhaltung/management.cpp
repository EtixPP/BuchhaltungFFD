#include "management.h"


management::management() 
{
}

management::management(const std::initializer_list<category> p_categories, const std::initializer_list<person> p_persons, const std::initializer_list<booking> p_booking):
m_CatVec{ p_categories },
m_PerVec{ p_persons },
m_BooVec{ p_booking }
{

}


management::~management()
{
	
}