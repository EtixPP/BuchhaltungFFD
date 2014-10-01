#pragma once
#include <string>
class person
{
public:
	person ( const std::string p_SecondName, const std::string p_FirstName );
	~person ( );
	std::string GetName ( );
	void SetName ( std::string p_name );
private:
	std::string m_SecondName;
	std::string m_FirstName;
};
