#pragma once
#include "account.h"
class payments_account : public account
{
public:
	payments_account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList );
	~payments_account ( );
	double GetBalance ( );
};

