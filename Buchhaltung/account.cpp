#include "account.h"

account::account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList ) :
m_BookingsVec { p_BookingList },
m_RepresentativesVec { p_PersonList }
{
	// Balance gets calculated
	for ( auto i : m_BookingsVec )
	{
		m_balance += i.GetValue ( );
	}
}

account::~account ( )
{
}