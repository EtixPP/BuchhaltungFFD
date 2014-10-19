#include "management.h"
#include "date.h"
int main ( )
{
	date foo{ 0,0,0, 20, 10, 1700 };
	std::cout << std::endl;
	date bar { 0, 0, 0, 20, 10, 1700 };
	std::cout << std::endl;
	if (foo > bar )


		std::cout << "is older";
	
	management ( );
	booking booking { "test", "test", category ( "test", "c:bla" ), person ( "person", "person" ), booking::Type::TYPE_EXPENDITURE, 625 };
	liability_account sav { { person ( "bla", "bla" ) }, { booking } };
	payments_account pay{ { person ( "person", "person" ) }, { booking } };
	pay << booking << booking << booking;
	pay << booking;
	pay << booking;
	pay << booking;
	pay << booking;
	pay << booking;
	pay << booking;
	sav.GetBalance ( );
	pay.GetBalance ( );
	system ( "PAUSE" );
}
