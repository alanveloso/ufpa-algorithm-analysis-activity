#include <iostream>
using std::cout;

void bubbleSort(int list[], int size)
{
	bool changed = true;
	while(changed){
		changed = false;
		for(int i = 1; i < size; i++){
				  if (list[i-1] > list[i]){
					  int aux = list[i-1];
					  list[i-1] = list[i];
					  list[i]= aux;
					  changed = true;
				  }
		}
	}
}

void siftDown(int list[], int begin, int end)
{
	int aux;
	int child = begin * 2 + 1;
	while (child <= end)
    {
		if ((child + 1 <= end) && (list[child] < list[child + 1]))
        {
			child += 1;
		}
		if(list[child] < list[begin])
        {
			aux = list[child];
			list[child] = list[begin];
			list[begin] = aux;
			begin = child;
			child = begin * 2 + 1;
		}
        else
        {
			break;
		}
	}
}

// Não funciona
void heapSort(int list[], int size)
{
	int i, j, aux;
	for(i = size / 2; i > -1; i--)
    {
		siftDown(list, i, size);
	}
	for(j = size; j >= 0; j--)
    {
		if (list[0] < list[j])
        {
		aux = list[j];
		list[j] = list[0];
		list[0] = aux;
		siftDown(list, 0, j - 1);
		}
	}
}

void insertionSort(int list[],int size)
{
	int aux, j;
	for (int i = 1; i < size; i++){
		j = i;
		while (j>0 && list[j-1] >list[j]){
			    aux = list[j-1];
				list[j-1] =list[j];
				list[j] = aux;
				j--;
		}
	}
}


// Refazer
void mergeSort(int list[], int size)
{
    if (size < 1)
        return;
    else
    {
        int i, j, l, k = 0;
        int middle = size/2;
        int mid1[middle], mid2[middle];

        while(j < middle)
        {
            mid1[j] = list[i];
            cout << mid1[j];
            j++;
            i++;
        }
    }
}

// Refazer
void quickSort(int *list, int size)
{
    if(size > 1)
    {
        int smaller[size];
        int even[size];
        int bigger[size];
        int i,j,k,l = 0;
        int pivot = list[int(size / 2)];

        for (i = 0; i < size; i++)
        {
            if (list[i] < pivot)
            {
                smaller[j] = list[i];
                j++;
            }
            else if (list[i] = pivot)
            {
                even[k] = list[i];
                k++;
            }
            else
            {
                bigger[l] = list[i];
                l++;
            }
        }

    quickSort(smaller, j);
    quickSort(bigger, l);

    for (i = 0; i < j; i++)
        list[i] = smaller[i];
    for (i = j; i < k; i++)
        list[i] = even[i];
    for (i = k; i < size; i++)
        list[i] = even[i];

    }
}

void selectionSort(int list[],int size)
{
	int x = 0;

	for (int i = 0; i <= size - 1;i++){
		x = i;
		for (int j = i+1; j <= size; j++){
			if (list[j] < list[x])
				x = j;
		}
		if (x!=i){
			int aux = list[x];
			list[x] =list[i];
			list[i] = aux;
		}
	}
}
