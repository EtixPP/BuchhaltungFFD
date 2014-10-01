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
	if ( CheckIdentity (p_booking.GetPerson() ) )
	m_BookingsVec.push_back ( p_booking );
	else
	{
		std::cout << "This person has no access to this account";
	}
}