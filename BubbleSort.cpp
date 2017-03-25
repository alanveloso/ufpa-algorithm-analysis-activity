void bubbleSort(int lista[])
{
    int size = int(sizeof(lista) / 4);
	bool changed = true;
	while(changed){
		changed = false;
		for(int i=1; i<= size; i++){
				  if (lista[i-1] > lista[i]){
					  int aux = lista[i-1];
					  lista[i-1] = lista[i];
					  lista[i]= aux;
					  changed = true;
				  }
		}
	}
}
