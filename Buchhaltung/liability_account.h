#pragma once
#include "account.h"
class liability_account : public account
{
public:
	liability_account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList );
	~liability_account ( );

	//Creates and ads booking to this account
	void CreateBooking ( booking p_booking );
	bool CashIn ( double p_value , person p_person); // returns true if person is able to modify the account and false if not.
	bool CashOut ( double p_value, person p_person ); // returns true if person is able to modify the account and false if not.
};

