#include "management.h"
int main ( )
{
	management ( );
	booking booking { "test", "test", category ( "test", "c:bla" ), person ( "person", "person" ), booking::Type::TYPE_EXPENDITURE, 625 };
	savings_account sav{ person ( "bla", "bla" ) };
	payments_account pay{ { person ( "person", "person" ) }, { booking } };
	sav.GetBalance ( );
	pay.GetBalance ( );
	system ( "PAUSE" );
}