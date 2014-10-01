#include "savings_account.h"

//a savings account can only cash in and out, its not possible to create bookings for him.
savings_account::savings_account ( const std::initializer_list<person> p_PersonList ) : account ( p_PersonList )
{
}


savings_account::~savings_account ( )
{
}

// returns true if person is able to modify the account and false if not.
bool savings_account::CashIn ( double p_value, person p_person )
{
	if ( CheckIdentity ( p_person ) )
	{
		m_balance += p_value;
		return true;
	}
	else
		return false;
}

// returns true if person is able to modify the account and false if not.
bool savings_account::CashOut ( double p_value, person p_person )
{
	if ( CheckIdentity ( p_person ) )
	{
		m_balance -= p_value;
		return true;
	}
	else
		return false;
}

