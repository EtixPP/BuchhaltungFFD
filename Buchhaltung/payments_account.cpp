#include "payments_account.h"


payments_account::payments_account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList ) : account ( p_PersonList, p_BookingList )
{
}


payments_account::~payments_account ( )
{
}
