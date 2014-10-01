#pragma once
#include "account.h"
class savings_account : public account
{
public:
	savings_account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList );
	~savings_account ( );
};

