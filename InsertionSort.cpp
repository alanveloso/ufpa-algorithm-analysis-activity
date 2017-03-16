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
