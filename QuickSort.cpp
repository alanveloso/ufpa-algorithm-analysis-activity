#include <iostream>

int quickSort(int list[])
{
    int size = int(sizeof(list)/4);
    int small[size];
    int even[size];
    int bigger[size];
    int i,j,k,l = 0;
    int pivot;

    pivot = list[(int) size / 2];

    for (i = 0; i < size; i++)
    {
        if (list[i] < pivot)
        {
            small[j] = list[i];
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

    quickSort(small);
    quickSort(bigger);

}
