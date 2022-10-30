
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int x)
{
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
    {

        cout << "Element is not present in array"<<endl;
    }
    else{
        cout << "Element is present at index " << result;

    }
    return 0;
}
