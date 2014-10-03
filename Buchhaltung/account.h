#pragma once
#include <vector>
#include <initializer_list>
#include "person.h"
#include "booking.h"
class account
{
public:
	account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList );
	account ( const std::initializer_list<person> p_PersonList );
	virtual ~account ( );
	virtual double GetBalance ( ); //returns the balance of the account
	//Creates and ads booking to this account
	virtual void CreateBooking ( booking p_booking );

protected:
	double m_balance;
	std::vector<person> m_RepresentativesVec;
	std::vector<booking> m_BookingsVec;
	bool CheckIdentity(person p_person);
};
