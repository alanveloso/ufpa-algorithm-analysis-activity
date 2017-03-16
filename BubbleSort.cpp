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
