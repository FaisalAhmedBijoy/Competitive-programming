#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);

    int i, j, min_idx;
    for (i = 0; i < N-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < N; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
    cout << "Sorted array: \n";

    for ( int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
