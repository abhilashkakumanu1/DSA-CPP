#include <iostream>
using namespace std;

// Swap two variables - pass by reference
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// print an array to screen - seperated by spaces
void printArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[size - 1] << endl;
    cout << "-------------------" << endl;
}