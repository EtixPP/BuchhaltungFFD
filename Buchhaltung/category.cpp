#include "category.h"

category::category ( const std::string p_name , std::string p_ImagePath) :
m_name { p_name },
m_ImagePath {p_ImagePath }
{
}

std::string category::GetName ( )
{
	return m_name;
}

category::~category ( )
{
}