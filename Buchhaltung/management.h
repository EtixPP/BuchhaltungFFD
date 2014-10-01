#pragma once
#include <initializer_list>
#include <vector>
#include <iostream>
#include "booking.h"
class management
{
public:
	explicit management ( ); // Management muss nicht zwingend mit Kategorien und co. gefüllt sein.
	explicit management ( const std::initializer_list<category> p_CategorieList, const std::initializer_list<person> p_PersonList, const std::initializer_list<booking> p_BookingList ); // Normalfall
	~management ( );
private:
	// Vektoren speichern im Management alle wichtigen Daten auf die in der Gui zugegriffen werden kann
	// Zum Beispiel wenn man eine neue Buchung erstellen will, in dem Fall kann man mit den Vecs Klapp Menüs erstelllen etc.
	std::vector<category> m_CategoryVec;
	std::vector<person> m_PersonVec;
	std::vector<booking> m_BookingVec;
};
