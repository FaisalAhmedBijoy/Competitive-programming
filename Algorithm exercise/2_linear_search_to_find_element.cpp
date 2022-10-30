// Write a program that can perform linear search (Specific element).
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int element;
    int numbers[10] ={0,1,2,3,4,5,6,7,8,9};
    cout<<"Enter the element need to search"<<endl;
    cin>>element;

    for (int i=0;i<10;i++)
    {
        if (element == numbers[i])
        {
            cout<<"Found the element in array: "<<element<<endl;
            cout<<"Location index number: "<<i<<endl;
            // break;

        }


    }

}
