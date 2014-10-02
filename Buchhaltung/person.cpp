#include "person.h"

person::person ( const std::string p_SecondName, const std::string p_FirstName ) :
m_FirstName { p_FirstName },
m_SecondName { p_SecondName }
{
}
person::person ( const std::string p_SecondName, const std::string p_FirstName, const std::string p_age, const std::string p_town ):
m_FirstName { p_FirstName },
m_SecondName { p_SecondName },
m_age {p_age },
m_town {p_town }
{
}
std::string person::GetName ( )
{
	return m_FirstName + " " + m_SecondName;
}
person::~person ( )
{
}