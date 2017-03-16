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
