#include <iostream>

using namespace std;

class node
{
public:
    int info;
    node *link;
};

node *head = NULL, *temp, *srt;
int insertion(int data)
{
    node *ptr;
    ptr = new node();
    ptr->info = data;
    ptr->link = head;

    if(head == NULL)
    {
        head = ptr;
        temp = ptr;
        ptr->link = head;
    }

    else
    {
        temp->link = ptr;
        temp = ptr;
    }

    return 0;
}
int traverse()
{
    for(srt=head;;)
    {
        if(srt->link!=head)
        {
            cout<<srt->info<<" ";
            srt = srt->link;
        }
        else
        {
            cout<<srt->info<<endl;
            break;
        }
    }
    return 0;
}
int joshef()

{
    node *ptr,*srt;
    for (srt=head ; 😉
    {
        if (srt == srt->link)
        {
            cout<<srt->info ;
            break ;
        }
        else
        {
            srt->link =srt ->link->link ;
            srt=srt->link ;
        }
    }

}
int main()
{
    int n;
    cout<<"How many solders : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        insertion(i);
    }
    joshef() ;

}
