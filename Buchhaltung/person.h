#pragma once
#include <string>
class person
{
public:
	explicit person ( const std::string p_SecondName, const std::string p_FirstName );
	explicit person ( const std::string p_SecondName, const std::string p_FirstName, const std::string p_age, const std::string p_town );
	~person ( );
	std::string GetName ( );
	void SetName ( std::string p_name );


private:
	std::string m_SecondName;
	std::string m_FirstName;
	std::string m_town;
	std::string m_age;
};
