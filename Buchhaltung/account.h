#pragma once
#include <vector>
#include <initializer_list>
#include "person.h"
#include "booking.h"
class account
{
public:
	account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList );
	virtual ~account ( );
protected:
	double m_balance;
	std::vector<person> m_RepresentativesVec;
	std::vector<booking> m_BookingsVec;
};
