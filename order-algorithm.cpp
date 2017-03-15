#include <iostream>
#include <fstream>
#include <locale.h>
#include <string>
#include <vector>
using namespace std;

void mostrar_vetor(int lista[],int tam){
	for(int i=0;i<tam;i++){
		cout << lista[i]<< " ";
	}
}

void bubblesort(int lista[],int tam){
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

void selectionsort(int lista[],int tam){
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

void insertionsort(int lista[],int tam){
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



int main(){
    setlocale(LC_ALL,"portuguese");

	ifstream arq("100.txt");
	int str[100];
	int i=0, tam;
	if(arq.is_open() && arq.good()){

		while(!arq.fail()){
			arq>>str[i];
			//cout <<str[i] <<"\n";
			i++;
		}
	}
	tam = sizeof(str)/4;

    mostrar_vetor(str,tam);
	cout <<"\n\n\n"<<endl;
	bubblesort(str, tam);

//	selectionsort(str, tam);
//	insertionsort(str , tam);


	mostrar_vetor(str,tam);

return 0;
}