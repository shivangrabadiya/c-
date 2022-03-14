#include<iostream>
#include"stdafx.h"
#include<crtdbg.h>
#include"Cstring.h"

using namespace std;
int main() {
	{
		Cstring c1;
		c1.show_string();

		Cstring c2("aboli");
		c2.show_string();


		Cstring c3('w', 10);
		c3.show_string();
		//Cstring* sptr = new Cstring();
		//delete sptr;
	}
	cout << "leaks" << _CrtDumpMemoryLeaks() << endl;
	return 0;
}