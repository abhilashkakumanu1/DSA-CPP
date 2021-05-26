/* Two sub arrays - sorted and unsorted. First find the minimum element in unsorted subarray and then push it into sorted subarray */

#include <iostream>

using namespace std;

void selectionSort(int arr[], int size)
{
    int minIndex;
    // traverse the entire array
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        // traverse the unsorted sub array
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

// Utils
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}