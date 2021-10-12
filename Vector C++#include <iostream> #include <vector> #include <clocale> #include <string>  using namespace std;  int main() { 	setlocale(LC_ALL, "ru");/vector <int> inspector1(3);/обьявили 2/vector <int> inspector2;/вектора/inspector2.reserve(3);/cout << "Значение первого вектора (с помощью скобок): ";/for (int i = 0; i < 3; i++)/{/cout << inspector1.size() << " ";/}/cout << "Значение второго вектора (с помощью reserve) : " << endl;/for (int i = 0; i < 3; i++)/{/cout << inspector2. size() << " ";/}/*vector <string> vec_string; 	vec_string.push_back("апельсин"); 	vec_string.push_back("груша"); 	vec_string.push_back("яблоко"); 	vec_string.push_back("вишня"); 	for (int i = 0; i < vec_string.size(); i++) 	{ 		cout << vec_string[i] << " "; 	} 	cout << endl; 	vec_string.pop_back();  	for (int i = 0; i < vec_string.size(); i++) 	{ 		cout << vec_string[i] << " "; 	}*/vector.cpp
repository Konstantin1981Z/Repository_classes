#include <iostream>
#include <vector>
#include <clocale>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//vector <int> inspector1(3); // обьявили 2
	//vector <int> inspector2;    // вектора
	//inspector2.reserve(3);

	//cout << "Значение первого вектора (с помощью скобок): ";

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << inspector1.size() << " ";
	//}
	//cout << "Значение второго вектора (с помощью reserve) : " << endl;
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << inspector2. size() << " ";
	//}

	/*vector <string> vec_string;
	vec_string.push_back("апельсин");
	vec_string.push_back("груша");
	vec_string.push_back("яблоко");
	vec_string.push_back("вишня");
	for (int i = 0; i < vec_string.size(); i++)
	{
		cout << vec_string[i] << " ";
	}
	cout << endl;
	vec_string.pop_back();

	for (int i = 0; i < vec_string.size(); i++)
	{
		cout << vec_string[i] << " ";
	}*/

	vector <int> inspector(2);
	inspector[0] = 2;
	inspector[1] = 3;
	for (int i = 0; i < inspector.size(); i++)
	{
		cout << inspector[i] << " ";
	}
	cout << endl;
	inspector.insert(inspector.begin(), 1);

	for (int i = 0; i < inspector.size(); i++)
	{
		cout << inspector[i] << " ";
	}

}
