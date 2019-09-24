#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("matrix.txt") ;
    if (in.is_open())
    {
        cout<<"File Open "<<endl;
    }
    else
    {
        cout<<"File Not Open "<<endl;
    }
}
