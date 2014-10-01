#pragma once
#include "account.h"
class savings_account : public account
{
public:
	savings_account ( const std::initializer_list<person> p_PersonList );
	~savings_account ( );

	bool CashIn ( double p_value , person p_person); // returns true if person is able to modify the account and false if not.
	bool CashOut ( double p_value, person p_person ); // returns true if person is able to modify the account and false if not.
};

