
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int element;
    int numbers[10] ={10,30,40,10,5,25,40,70,22,33};
    int numbers_array_size = sizeof(numbers) / sizeof(numbers[0]);
    cout<<"Enter the element need to search"<<endl;
    cin>>element;

    for (int i=0;i<10;i++)
    {
        if (element == numbers[i])
        {
            cout<<"Found the element in array: "<<element<<endl;
            cout<<"Location index number: "<<i<<endl;

        }
        if (element == numbers[0])
        {
            cout<<"First element of the array"<<endl;
            break;

        }
         if (element == numbers[-1])
        {
            cout<<"Last element of the array"<<endl;
            break;

        }
        if (element == numbers[int(numbers_array_size/2)])
        {
             cout<<"Middle element of the array"<<endl;
             break;

        }
        if (i ==9){
            cout<<"Not found in the input array"<<endl;
        }





    }

}
