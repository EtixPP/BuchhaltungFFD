#include "management.h"

management::management ( )
{
}

management::management ( const std::initializer_list<category> p_CategorieList, const std::initializer_list<person> p_PersonList, const std::initializer_list<payments_account> p_AccountList ) :
m_CategoryVec { p_CategorieList },
m_PersonVec { p_PersonList },
m_AccountList { p_AccountList }
{

}

double management::GetBilance ( )
{
	double l_balance = 0;
	for ( auto i : m_AccountList )
	{
		l_balance += i.GetBalance ( );
	}
	return l_balance;
}

management::~management ( )
{
}