#include <iostream>
#include <fstream>
#include <locale.h>
#include <string>
using std::cout;
using std::endl;
using std::ifstream;

#define FILE "100.txt"
#define SIZE 100

void printList(int list[])
{
	for(int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}
}

int main()
{
	setlocale(LC_ALL,"portuguese");

	ifstream file(FILE);
	int list[SIZE];
	int i = 0;

	if(file.is_open() && file.good())
	{
		while(!file.fail())
		{
			file >> list[i];
			i++;
		}
	}

	printList(list);
	
	cout << endl;

	return 0;
}

