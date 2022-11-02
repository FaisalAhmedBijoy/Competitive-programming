
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

    cout << "Sorted array: \n";
    for ( int i = 0; i < N; i++)
        cout << arr[i] << " ";

    return 0;
}
