#include "Soldier.h"
#include <iostream>
using namespace std;
Soldier::Soldier(string _name, int _age)
{
	m_strNamae = _name;
	m_iAge = _age;
	cout << "Soldier--Soldier(string _name, int _age)" << endl;
}

Soldier::~Soldier()
{
	cout << "Soldier--~Soldier()" << endl;
}

void Soldier::work()
{
	cout << "Soldier--work()" << endl;
	cout << m_strNamae << endl;
	cout << m_iAge << endl;
}
