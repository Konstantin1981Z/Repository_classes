#include <iostream>
#include "phonebook_funcs.h"
#include <Windows.h>
using namespace std;

int main ()
{
	Node *pBegin, *pEnd;
	pBegin = pEnd = Firstltem ();
	for (int i = 0; i < 3; i++)
		pEnd = Addltem (pEnd);

	cout << "\nВаш список:" << endl;
	PrintList (pBegin);
}