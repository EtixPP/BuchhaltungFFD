#include "person.h"

person::person ( const std::string p_SecondName, const std::string p_FirstName ) :
m_FirstName { p_FirstName },
m_SecondName { p_SecondName }
{
}

std::string person::GetName ( )
{
	return m_FirstName + " " + m_SecondName;
}
person::~person ( )
{
}