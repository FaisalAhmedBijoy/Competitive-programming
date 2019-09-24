#include<bits/stdc++.h>
using namespace std;
class node
{
public:

    int info ;
    node *forw,*backw ;

};
node *FIRST=NULL,*LAST=NULL,*temp;
int creation(int data)
{
    node *ptr;
    ptr=new node() ;
    ptr->info=data ;
    ptr->forw=NULL;
    ptr->backw=NULL;
    if (FIRST == NULL)
    {
        FIRST =ptr;
        LAST=ptr;
        ptr->forw=ptr;
        ptr->backw=ptr;

    }
    else
    {
        LAST->forw =ptr;
        ptr->backw=LAST ;
        ptr->forw=FIRST ;
        LAST =ptr;
        FIRST ->backw=LAST ;
    }
}
int traverse()
{
    node *srt ;
    cout<<"Circular Doubly Linked List "<<endl;
    for (srt=FIRST ; ; )
    {

        if (srt->forw == FIRST)
        {
            cout<<srt->info <<endl;
            break ;
        }
        else
        {
            cout<<srt->info<<endl;
            srt=srt->forw ;
        }
    }
}
int first_insert()
{
    int item;
    cout<<"Enter item to first insert "<<endl;
    cin>>item;
    node *ptr;
    ptr=new node () ;
    ptr->info =item;
    ptr->backw=NULL;
    ptr->forw=NULL;
    ptr->forw =FIRST ;
    ptr->backw=LAST ;
    LAST ->forw=ptr;
    FIRST ->backw=ptr;
    FIRST =ptr;
    traverse() ;
}
int last_insert()
{
    int item;
    cout<<"Enter item to last  insert "<<endl;
    cin>>item;
    node *ptr;
    ptr=new node () ;
    ptr->info =item;
    ptr->backw=NULL;
    ptr->forw=NULL;
    ptr->backw=LAST ;
    ptr->forw=FIRST ;
    FIRST->backw=ptr;
    LAST->forw=ptr;
    LAST=ptr;
    traverse() ;
}
int after_insert()
{
    int search_item;
    traverse() ;
    cout<<"Enter The search item for after insertion "<<endl;
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
int first_delete()
{
    FIRST=FIRST->forw;
    LAST->forw=FIRST ;
    FIRST->backw=LAST;
    traverse();
}
int last_delete()
{
    node *srt ;
    for (srt= FIRST ; ; )
    {

        if (srt->forw == FIRST)
        {
            temp->forw=FIRST ;
            FIRST->backw=temp;
            LAST = temp;
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

int given_delete()
{
    traverse() ;
    cout<<"Enter The given item to delete "<<endl;
    int item ;
    cin>>item;
    node *srt;
    for (srt = FIRST ; ; )
    {
        if (srt->info == item )
        {
            srt->forw->backw =srt->backw ;
            srt->backw->forw=srt->forw ;
            break ;
        }
        else
        {
            srt=srt->forw ;
        }
    }
    traverse() ;
}
int after_delete()
{
    traverse() ;
    int search_item;
    cout<<"Enter The Search item for after deletion "<<endl;
    cin>>search_item ;
    node *srt ;
    for (srt=FIRST  ; ; )
    {
        if (srt->info == search_item  )
        {


            srt->forw->forw->backw=srt ;
            srt->forw =srt->forw->forw ;
            break ;
        }
        else
        {
            srt=srt->forw ;
        }
    }
    traverse() ;
}
int before_delete()
{
    traverse() ;
    int search_item;
    cout<<"Enter The Search item for before deletion "<<endl;
    cin>>search_item ;
    node *srt ;
    for (srt=FIRST ; ; )
    {
        if (srt->info ==search_item)
        {
            srt->backw->backw->forw=srt ;
            srt->backw=srt->backw->backw ;
            break ;

        }
        else
        {
            srt=srt->forw ;
        }
    }
    traverse() ;

}




int main()
{
    cout<<endl<<endl<<endl<<endl;
    cout<<"                             Circular Doubly Liked List" <<endl<<endl;
    cout<<"                             ***************************"<<endl<<endl<<endl;

    cout<<"Enter The Elements number "<<endl;
    int n,item;
    cin>>n ;
    cout<<"Enter The Values "<<endl;


    for (int i=0 ; i<n; i++)
    {
        cin>>item ;
        creation(item) ;
    }
    //traverse() ;
    //first_insert() ;
    // last_insert() ;
    //after_insert() ;
    //before_insert() ;
    //first_delete() ;
    //last_delete() ;
    //  after_delete() ;
    //given_delete() ;
    // before_delete();
    cout<<"These are The input values you are given "<<endl<<endl;
    traverse() ;
    cout<<endl<<endl<<endl;

    cout<<"Insertion & Deletion can be possible in the Linked List "<<endl<<endl;
    cout<<"Press 1 : insertion "<<endl;
    cout<<"Press 2 : Deletion "<<endl;
    cout<<"Press 3 : Update a certain value "<<endl;
    int choice ;
    cin>>choice ;
    system("cls") ;

    if (choice == 1)
    {

        cout<<"Enter Your Choice "<<endl<<endl;
        cout<<"Enter 1 : first insert "<<endl;
        cout<<"Enter 2 : last insert "<<endl;
        cout<<"Enter 3 : after insert "<<endl;
        cout<<"Enter 4 : before insert "<<endl<<endl;


        int k ;
        //  system("cls") ;
        cin>>k;

        if (k == 1)
        {
            first_insert () ;
        }
        else if (k==2)
        {
            last_insert() ;
        }
        else if (k == 3)
        {
            before_insert () ;

        }
        else if (k == 4)
        {
            after_insert() ;
        }
        else
        {
            cout<<"wrong option"<<endl;
        }



    }
    else if (choice == 2)
    {


        cout<<"Enter Your Choice "<<endl<<endl;
        cout<<"Enter 1 : first deletion "<<endl;
        cout<<"Enter 2 : last deletion  "<<endl;
        cout<<"Enter 3 : after deletion "<<endl;
        cout<<"Enter 4 : before deletion "<<endl ;
        cout<<"Enter 5 : Given item deletion"<<endl<<endl;

        int k ;
        //system("cls") ;
        cin>>k;

        if (k == 1)
        {
            first_delete()  ;
        }
        else if (k==2)
        {
            last_delete()  ;
        }
        else if (k == 3)
        {
            after_delete() ;

        }
        else if (k == 4)
        {

            before_delete() ;

        }
        else if (k==5)
        {
            given_delete() ;

        }
        else
        {
            cout<<"wrong option"<<endl;
        }




    }

    else
    {
        cout<<"Sorry you choose the wrong option "<<endl<<endl;
    }
    cout <<"Are You want to exit from the program or Continue The program  "<<endl;
    cout<<"Press 1 : For Exit This Program "<<endl;
    cout<<"Press 2 : Continue The program "<<endl<<endl<<endl;
//   cout<<"Otherwise press  key to continue the program "<<endl<<endl<<endl;
    int stop;
    cin>>stop ;
    system("cls") ;
    if (stop == 1)
    {
        return 0 ;

    }
    else if (stop  ==2)
    {
        main() ;
    }
    else
    {
        cout<<"Sorry Wrong Option "<<endl;
    }




}
