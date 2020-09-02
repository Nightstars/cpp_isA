#include "Person.h"
#include <iostream>
using namespace std;
Person::Person(string _name)
{
	m_strNamae = _name;
	cout << "Person--Person()" << endl;
}

Person::~Person()
{
	cout << "Person--~Person()" << endl;
}

void Person::play()
{
	cout << "Person--play()" << endl;
	cout << m_strNamae << endl;
}
