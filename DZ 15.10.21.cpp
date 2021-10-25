#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main ()
{
	SetConsoleCP (1251);
	SetConsoleOutputCP (1251);
	ifstream fin ("Word.txt");
	int count = 0;
	string str;
	if (fin.is_open ())
	{
		while (!fin.eof ())
		{
			getline (fin, str);
			count++;
		}
		//cout << count << endl;
	}
	else
	{
		cout << "Невозможно найти файл";
	}
	fin.close ();

	fin.open("Word.txt");
	srand ((unsigned)time (NULL));
	int run = rand () % count + 1;
	//cout << run << endl;
	if (fin.is_open ())
	{
		int word_ind = 1;
		while (!fin.eof ())
		{
			getline (fin, str);
			if (run == word_ind)
			{
				cout << str << endl;
				break;
			}
			word_ind++;
		}
	}
	for (int i = 0; i < str.length (); i++)
	{
		cout << "_" << " ";
	}
	while (true)
	{
		string enter;
		cin >> enter;
		if (enter == str)
			cout << str << endl;
	}
	return 0;
}
