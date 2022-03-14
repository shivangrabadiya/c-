#include"stdafx.h"
#include<iostream>
#include"Cstring.h"
#include<memory.h>
#include<memory.h>


using namespace std;

Cstring::Cstring()
{
	m_len = 0;
	m_pbuff = new char;
	*m_pbuff = '\0';

}

Cstring::Cstring(const char* str)
{
	m_len = strlen(str);
	m_pbuff = new char[m_len + 1];
	//	strcpy(this->m_pbuff, str);

}

Cstring::Cstring(char ch, int no)
{
	m_len = no;
	m_pbuff = new char[m_len + 1];
	//for (int i = 0; i < m_len; ++i)
	//m_pbuff[i] = ch;
	memset(m_pbuff, ch, no);
	m_pbuff[m_len] = '\0';

}

void Cstring::show_string() {
	cout << m_len << "" << m_pbuff;
}

Cstring:: ~Cstring()
{
	if (m_pbuff)
		delete m_pbuff;
	m_pbuff = nullptr;


}