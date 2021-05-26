#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    int temp, j;
    // start from 2nd element
    for (int i = 1; i < size; i++)
    {
        // remove a card from unsorted deck - selected card
        temp = arr[i];
        j = i - 1;
        // move sorted cards to the right
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        // insert the selected card
        arr[j + 1] = temp;
    }
}

// Utils
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}