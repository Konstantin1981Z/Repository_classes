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
	string otvet = str;
	for (int i = 0; i < str.length (); i++)
	{
		cout << "_" << " ";
		otvet[i] = '_';
	}
	cout << endl;
	int emaunt = 0;
	while (emaunt < 3)
	{
		char enter;
		cin >> enter;
		for (int i = 0; i < str.length (); i++)
		{
			if (enter == str[i])
			{ 
				otvet[i] = str[i];
			}
			else
				emaunt++;
		}
		for (int i = 0; i < otvet.length (); i++)
		{
			cout << otvet[i] << " ";
			
		}
		cout << endl;
	}
	return 0;
}
