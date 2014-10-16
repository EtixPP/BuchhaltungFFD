#pragma once
#include <map>
#include <string>
class months
{
public:
	months ( );
	virtual ~months ( );
protected:
	std::map<int, int> m_monthmap;
};

