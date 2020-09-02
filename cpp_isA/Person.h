#pragma once
#include <string>
using namespace std;
class Person
{
public:
	Person(string _name="Jim");
	virtual ~Person();
	void play();
protected:
	string m_strNamae;
};

