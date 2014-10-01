#include "management.h"

management::management ( )
{
}

management::management ( const std::initializer_list<category> p_CategorieList, const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList ) :
m_CategoryVec { p_CategorieList },
m_PersonVec { p_PersonList },
m_BookingVec { p_BookingList }
{
}

management::~management ( )
{
}