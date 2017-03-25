#include <iostream>

int quickSort(int list[])
{
    int size = SIZE;
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

    quickSort(smaller);
    quickSort(bigger);

    for (i = 0; i < j; i++)
        list[i] = smaller[i];
    for (i = j; i < k; i++)
        list[i] = even[i];
    for (i = k; i < size; i++)
        list[i] = even[i];

}
