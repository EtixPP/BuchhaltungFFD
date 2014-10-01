#pragma once
#include <string>
class category
{
public:
	explicit category ( const std::string p_name );
	~category ( );
private:
	std::string m_name;
};
