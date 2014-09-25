#pragma once
#include <initializer_list>
#include <vector>
#include <iostream>
#include "booking.h"
class management
{
public:
	explicit management(); // Management muss nicht zwingend mit Kategorien und co. gef�llt sein.
	explicit management(const std::initializer_list<category> p_categories,const std::initializer_list<person> p_persons,const std::initializer_list<booking> p_booking); // Normalfall
	~management();
private:
	// Vektoren speichern im Management alle wichtigen Daten auf die in der Gui zugegriffen werden kann 
	// Zum Beispiel wenn man eine neue Buchung erstellen will, in dem Fall kann man mit den Vecs Klapp Men�s erstelllen etc.
	std::vector<category> m_CatVec;
	std::vector<person> m_PerVec;
	std::vector<booking> m_BooVec;
	
};
