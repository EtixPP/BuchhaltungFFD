#include "management.h"
int main ( )
{
	management ( );
	booking booking { "test", "test", category ( "test", "c:bla" ), person ( "person", "person" ), booking::Type::TYPE_EXPENDITURE, 625 };
	liability_account sav { { person ( "bla", "bla" ) }, { booking } };
	payments_account pay{ { person ( "person", "person" ) }, { booking } };
	pay << booking;
	pay << booking;
	pay << booking;
	pay << booking;
	sav.GetBalance ( );
	pay.GetBalance ( );
	system ( "PAUSE" );
}