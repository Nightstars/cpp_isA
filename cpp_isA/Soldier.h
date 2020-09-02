#pragma once
#include "Person.h"
class Soldier : public Person
{
public:
	Soldier(string _name="James",int _age=20);
	virtual ~Soldier();
	void work();
protected:
	int m_iAge;
};

