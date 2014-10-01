#include "savings_account.h"


savings_account::savings_account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList ) : account ( p_PersonList, p_BookingList )
{
}


savings_account::~savings_account ( )
{
}
