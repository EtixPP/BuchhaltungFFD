#pragma once
#include <string>
#include "person.h"
#include "category.h"
class booking
{
public:
	enum Type { TYPE_REVENUE, TYPE_EXPENDITURE };
	booking ( const std::string p_title, const std::string p_notice, const category p_category, const person p_person, const booking::Type p_type, const double p_value );
	~booking();
	Type GetType ( );
	std::string GetTitle ( );
	std::string GetNotice ( );
	category GetCategory ( );
	double GetValue ( );

private:
	 Type m_type;
	 std::string m_title;
	 std::string m_notice;
	 category m_category;
	 person m_person;
	 double m_value;

};
