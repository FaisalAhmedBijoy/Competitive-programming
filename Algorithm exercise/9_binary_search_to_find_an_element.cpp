
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int x)
{
    while (left <= right)
    {
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
    int search_element = 10;
    int left=0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int right=n-1;
    int result = binarySearch(arr, left, right, search_element);

    if (result == -1)
    {
        cout << "Element is not present in array"<<endl;
    }
    else
    {
        cout << "Element is present at index: " << result;

    }
    return 0;
}
