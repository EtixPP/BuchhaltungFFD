#include "liability_account.h"
#include <iostream>
//a savings account can only cash in and out, its not possible to create bookings for him.
liability_account::liability_account ( const std::initializer_list<person> p_PersonList , const std::initializer_list<booking> p_BookingList) : account ( p_PersonList,p_BookingList )
{
	for ( auto i : p_BookingList )
	{
		if ( i.GetType ( ) == booking::TYPE_EXPENDITURE )
			m_BookingsVec.push_back ( i );
		else
			std::cout << "Only expenditures are allowed on liability account";
	}
}


liability_account::~liability_account ( )
{
}

// returns true if person is able to modify the account and false if not.
bool liability_account::CashIn ( double p_value, person p_person )
{
	if ( CheckIdentity ( p_person ) )
	{
		m_balance += p_value;
		return true;
	}
	else
		return false;
}
//Creates and ads booking to this account
void liability_account::CreateBooking ( booking p_booking )
{
	if ( CheckIdentity ( p_booking.GetPerson ( ) ) )
	{
		if ( p_booking.GetType ( ) == booking::TYPE_EXPENDITURE )
		{
			m_balance -= p_booking.GetValue ( );
			m_BookingsVec.push_back ( p_booking );
		}
		else
		{
			std::cout << "Only expenditures can be added to a liabilitys_account";	
		}
	}
	else
	{
		std::cout << "This person has no access to this account";
	}
}

// returns true if person is able to modify the account and false if not.
bool liability_account::CashOut ( double p_value, person p_person )
{
	if ( CheckIdentity ( p_person ) )
	{
		m_balance -= p_value;
		return true;
	}
	
	else
		return false;
}

