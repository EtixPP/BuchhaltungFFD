#pragma once
#include <string>
class person
{
public:
	person(std::string p_name);
	~person();
	std::string GetName();
	void SetName(std::string p_name);
private:
	std::string m_name;
};
