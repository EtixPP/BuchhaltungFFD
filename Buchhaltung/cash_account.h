#pragma once
#include "account.h"
class cash_account : public account
{
public:
	cash_account  (const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList);
	~cash_account ( );
};

