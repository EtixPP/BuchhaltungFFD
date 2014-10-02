#pragma once
#include <string>
class category
{
public:
	explicit category ( const std::string p_name ,const std::string p_ImagePath);
	~category ( );
	std::string GetName ( );
private:
	std::string m_name;
	std::string m_ImagePath;
};
