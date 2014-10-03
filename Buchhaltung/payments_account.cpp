#include "payments_account.h"
#include <iostream>

payments_account::payments_account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList ) : account ( p_PersonList, p_BookingList )
{
}
payments_account::~payments_account ( )
{
}

double payments_account::GetBalance ( )
{
	std::cout << "\n DEBUG - BALANCE ->" << m_balance << "\n";
	return m_balance;
}