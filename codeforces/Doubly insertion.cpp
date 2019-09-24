#include<iostream>
using namespace std;
class node
{
public:
    int info;
    node *forw,*backw ;

};
node *FIRST=NULL,*LAST=NULL,*temp=NULL;
int creation(int data)
{
    node *ptr ;
    ptr=new node () ;
    ptr->info=data ;
    ptr->forw=NULL;
    ptr->backw=NULL;
    if (FIRST == NULL)
    {
        FIRST =ptr;
        LAST=ptr;

    }
    else
    {
        LAST->forw=ptr;
        ptr->backw=LAST;
        LAST=ptr;
    }
}
int traverse()
{
    cout<<"Doubly Linked List Elements "<<endl;
    node *srt ;
    for (srt=FIRST ; ; )
    {
        if (srt ->forw == NULL)
        {
            cout<<srt->info<<" "<<endl;;
            break ;
        }
        else
        {
            cout<<srt->info<<endl ;
            srt=srt->forw ;
        }
    }
}
int first_insert()
{
    node *ptr;
    ptr=new node () ;
    cout<<"Enter Element To inset first in Doubly Linked List "<<endl;
    int item;
    cin>>item;

    ptr->info=item ;
    ptr->backw=NULL;
    ptr->forw=NULL;
    ptr->forw=FIRST ;
    FIRST->backw =ptr;
    FIRST =ptr;
    traverse() ;
}
int last_insert()
{
    cout<<"Enter Elements for Last insert in Doubly Linked List "<<endl;
    int item;
    cin>>item;
    node *ptr,*srt;
    ptr=new node () ;
    ptr->backw=NULL;
    ptr->forw=NULL;
    ptr->info=item;
    for (srt=FIRST ; ; )
    {
        if (srt ->forw == NULL)
        {
            srt->forw =ptr;
            ptr->backw=srt ;
            LAST =ptr;
            break ;
        }
        else
        {
            srt= srt->forw ;
        }
    }
    traverse() ;

}
int after_insert()
{
    int search_item;
    cout<<"Enter The search item for after insertion "<<endl;
    traverse() ;
    cin>>search_item ;
    node *ptr;
    ptr=new node () ;
    cout<<"Enter item for after Insert "<<endl;
    int item ;
    cin>>item;
    ptr->info =item;
    ptr->backw=NULL;
    ptr->forw=NULL;
    node *srt ;
    for (srt=FIRST ; ; )
    {
        if (srt->info == search_item )
        {
            ptr->forw =srt->forw ;
            srt->forw =ptr;
            break ;
        }
        else
        {
            srt= srt->forw ;
        }
    }
    traverse() ;

}
before_insert()
{

    int search_item;
    traverse() ;
    cout<<"Enter The search item for before insertion "<<endl;
    cin>>search_item ;
    node *ptr;
    ptr=new node () ;
    cout<<"Enter item for before Insert "<<endl;
    int item ;
    cin>>item;
    ptr->info =item;
    ptr->backw=NULL;
    ptr->forw=NULL;
    node *srt ;
    for (srt=FIRST ; ; )
    {
        if (srt->info == search_item)
        {
            ptr->forw=srt;
            ptr->backw =temp;
            srt->backw=temp;
            temp->forw =ptr;
            break ;
        }
        else
        {
            temp=srt ;
            srt=srt->forw ;
        }
    }
    traverse() ;
}
int main()
{
    cout<<"Enter The Elements number "<<endl;
    int n,item;
    cin>>n;
    cout<<"Enter The Values"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>item ;
        creation (item) ;
    }
    traverse() ;
    first_insert () ;
    last_insert() ;
    after_insert() ;
    before_insert() ;
}

