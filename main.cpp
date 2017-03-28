#include <iostream>
#include <fstream>
#include <locale.h>
#include <string>
#include "Sort.h"

using std::cout;
using std::endl;
using std::ifstream;

void printArray(int list[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
}

void setArray(ifstream &file, int list[])
{
    int i = 0;
    while(file >> list[i])
        i++;
}

int main()
{
	setlocale(LC_ALL,"portuguese");

	ifstream file("100.txt");
    int size = 100;
	int list[size];

    setArray(file, list);
    cout << "----------- FILE -----------" << endl;
    printArray(list, size);
    cout << "\n----------- Sort -----------" << endl;
    mergeSort(list, size);

	return 0;
}

