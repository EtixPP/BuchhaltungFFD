#pragma once
#include <string>
#include "person.h"
#include "category.h"
class booking
{
public:
	enum Type { TYPE_REVENUE, TYPE_EXPENDITURE };
	booking(std::string p_title, std::string p_notice, category p_category, person p_person, booking::Type p_type);
	~booking();


private:
	Type m_type;
	std::string m_title;
	std::string m_notice;
	category m_category;
	person m_person;
};
