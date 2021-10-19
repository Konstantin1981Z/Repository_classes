#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main ()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream fin;
	fin.open ("Word.txt");
	if (fin.is_open ())
	{
		string str;
		while (!fin.eof())
		{
			getline (fin, str);
			cout << str << endl;
		}
	}
	else
	{
		cout << "Невозможно найти файл";
	}
	fin.close ();

	return 0;
}
