#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	ofstream fout;  // создание потока вывода
	fout.open ("test.txt");  // открытие файла test.txt
	fout << "Это записано в файл";  // запись в файл (помещение в поток)
	fout.close (); // закрытие файла
	return 0;
}