#include "payments_account.h"
#include <iostream>

payments_account::payments_account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList ) : account ( p_PersonList, p_BookingList )
{
}


payments_account::~payments_account ( )
{
}

//Creates and ads booking to this account
void payments_account::CreateBooking ( booking p_booking )
{
	if ( CheckIdentity ( p_booking.GetPerson ( ) ) )
	{
		if ( p_booking.GetType ( ) == booking::TYPE_EXPENDITURE )
		{
			m_balance -= p_booking.GetValue ( );
		}
			
		else if ( p_booking.GetType ( ) == booking::TYPE_REVENUE )
		{
			m_balance += p_booking.GetValue ( );
		}
		m_BookingsVec.push_back ( p_booking );
	}
	else
	{
		std::cout << "This person has no access to this account";
	}
}

double payments_account::GetBalance ( )
{
	std::cout << "\n DEBUG - BALANCE ->" << m_balance << "\n";
	return m_balance;
}