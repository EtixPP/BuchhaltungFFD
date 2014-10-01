#include "cash_account.h"


cash_account::cash_account ( const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList ) : account (p_PersonList,p_BookingList )
{
}


cash_account::~cash_account ( )
{
}
