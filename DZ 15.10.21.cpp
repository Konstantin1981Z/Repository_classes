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
	int count = 0;
	fin.open ("Word.txt");
	if (fin.is_open ())
	{
		string str;
		while (!fin.eof())
		{
			getline (fin, str);
			count++;
		}
		cout << count << endl;
	}
	else
	{
		cout << "Невозможно найти файл";
	}
	fin.close ();

	srand((unsigned)time (NULL));
	int run = rand () % count + 1;
	cout << run << endl;


	return 0;
}
