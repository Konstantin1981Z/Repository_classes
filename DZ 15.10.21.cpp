#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void InsertionSort (int* values, int size, bool (*foo)(int, int)) {
    for (int i = 1; i < size; ++i) {
        int x = values[i];
        int j = i;
        while (j > 0 && values[j - 1] > x) {
            values[j] = values[j - 1];
            --j;
        }
        values[j] = x;
    }
}

bool po_vozr (int a, int b) { return a > b; }
bool po_ub (int a, int b) { return a < b; }


int main ()
{
	setlocale (LC_ALL, "rus");

    int array[] = {2,9,4,6,3,4,5,6,4,8};
    InsertionSort (array, 10, po_ub);

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << ' ';
    }
    return 0;
}
