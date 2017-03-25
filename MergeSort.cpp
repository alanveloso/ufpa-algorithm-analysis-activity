void mergeSort(int list[])
{
    int size = SIZE;
    int mid1[int(size / 2)];
    int mid2[int(size / 2)];
    int i, j, k = 0;

    for(i = 0; i < size / 2; i++)
        mid1[i] = list[i];
    for(i = size / 2; i < size; i++)
    {
        mid2[j] = list[i];
        j++;
    }

    mergeSort(mid1);
    mergeSort(mid2);

    for(i = 0; i < size; i++)
        if(mid1[j] < mid2[k])
            list[i] = mid1[j];
        else
            list[i] = mid2[k];

}
