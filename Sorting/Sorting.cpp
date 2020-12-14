// Sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void selection(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
    printArray(arr, n);
}

void bubble(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
    printArray(arr, n);
}
void insertion(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printArray(arr,n);
}

int main()
{
    cout << "Enter data to sort\n";

    int arr[] = { 64, 25, 12, 22, 11, 37 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Select search algorithm\n";
    cout << "1. Selection search\n";
    cout << "2. Bubble sort\n";
    cout << "3. Insertion sort\n";
    cin >> x;
    switch (x) {
    case 1:
        selection(arr, n); 
        break;
    case 2:
        bubble(arr, n);
        break;
    case 3:
        insertion(arr, n);
        break;
    default:
        // code block
        break;
    }
    
}