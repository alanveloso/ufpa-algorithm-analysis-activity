#include <iostream>
#include <fstream>
#include <locale.h>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::ifstream;

void printList(int lista[],int tam)
{
	for(int i=0;i<tam;i++){
		cout << lista[i] << " ";
	}
}

void bubbleSort(int lista[],int tam)
{
	bool ver = true;
	while(ver){
		ver = false;
		for(int i=1; i<= tam; i++){
				  if (lista[i-1] > lista[i]){
					  int aux = lista[i-1];
					  lista[i-1] = lista[i];
					  lista[i]= aux;
					  ver = true;
				  }
		}
	}
}

void selectionSort(int lista[],int tam)
{
	int x=0;

	for (int i=0; i <= tam-1;i++){
		x = i;
		for (int j= i+1; j<=tam; j++){
			if (lista[j] < lista[x])
				x = j;
		}
		if (x!=i){
			int aux = lista[x];
			lista[x] =lista[i];
			lista[i] = aux;
		}
	}
}

void insertionSort(int lista[],int tam)
{
	int aux, j;
	for (int i =1; i<=tam;i++){
		j = i;
		while (j>0 && lista[j-1] >lista[j]){
			    aux = lista[j-1];
				lista[j-1] =lista[j];
				lista[j] = aux;
				j--;
		}
	}
}



int main()
{
	setlocale(LC_ALL,"portuguese");

	ifstream arq("100.txt");
	int str[100];
	int i=0, tam;
	if(arq.is_open() && arq.good())
	{

		while(!arq.fail())
		{
			arq>>str[i];
			//cout <<str[i] <<"\n";
			i++;
		}
	}
	tam = sizeof(str)/4;

	printList(str,tam);
	cout <<"\n\n\n"<< endl;
	bubbleSort(str, tam);

//	selectionsort(str, tam);
//	insertionsort(str , tam);


	printList(str,tam);

	return 0;
}
