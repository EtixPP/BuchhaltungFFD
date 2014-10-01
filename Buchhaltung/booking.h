#pragma once
#include <string>
#include "person.h"
#include "category.h"
class booking
{
public:
	enum Type { TYPE_REVENUE, TYPE_EXPENDITURE }; // Possible booking types
	booking ( const std::string p_title, const std::string p_notice, const category p_category, const person p_person, const booking::Type p_type, const double p_value ); //Basic Constructor
	~booking ( );

	/*GET-Functions of the class start*/
	Type GetType ( );
	std::string GetTitle ( );
	std::string GetNotice ( );
	category GetCategory ( );
	double GetValue ( );
	/*GET-Functions of the class end*/

private:
	Type m_type; //Is the booking a revenue or a expenditure?
	std::string m_title; //title of the booking
	std::string m_notice; //notice of the author regarding the booking
	category m_category; // category of the booking
	person m_person; // Who created this booking?
	double m_value; // Value of the booking
};
