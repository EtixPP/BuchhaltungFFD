#include "account.h"

#include <iostream>

account::account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList ) :
m_BookingsVec { p_BookingList },
m_RepresentativesVec { p_PersonList },
m_balance {0 }
{
	// Balance gets calculated
	for ( auto i : m_BookingsVec )
	{
		if ( CheckIdentity ( i.GetPerson ( ) ) )
		{
			if ( i.GetType ( ) == booking::TYPE_EXPENDITURE )
			{
				m_balance -= i.GetValue ( );
			}

			else if ( i.GetType ( ) == booking::TYPE_REVENUE )
			{
				m_balance += i.GetValue ( );
			}
			m_BookingsVec.push_back ( i );
		}
		else
		{
			std::cout << "This person has no access to this account";
		}
	}
}



account::account ( const std::initializer_list<person> p_PersonList ) :
m_RepresentativesVec { p_PersonList }
{
	// Balance gets calculated
	for ( auto i : m_BookingsVec )
	{
		m_balance += i.GetValue ( );
	}
}

//Creates and ads booking to this account
void account::CreateBooking ( booking p_booking )
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


bool account::CheckIdentity ( person p_person )
{
	for ( auto i : m_RepresentativesVec )
	{
		if ( p_person.GetName ( ) == i.GetName() )
			return true;

	}
	return false;
}
double account::GetBalance ( )
{
	std::cout << "\n DEBUG - BALANCE ->" << m_balance << "\n";
	return m_balance;
}


account::~account ( )
{
}