#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    int array_size = sizeof(arr) / sizeof(arr[0]);
    int i, key, j;

    for (i = 1; i < array_size; i++)
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
    cout << "Sorted array: \n";
    for ( int i = 0; i < array_size; i++)
        cout << arr[i] << " ";

    return 0;
}
