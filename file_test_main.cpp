#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	ofstream fout;  // �������� ������ ������
	fout.open ("test.txt");  // �������� ����� test.txt
	fout << "��� �������� � ����";  // ������ � ���� (��������� � �����)
	fout.close (); // �������� �����
	return 0;
}