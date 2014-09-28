#include "management.h"
int main()
{
	management();
	booking booking { "test", "test", category ( "test" ), person ( "person" ), booking::Type::TYPE_REVENUE, 65 };
	system("PAUSE");
}