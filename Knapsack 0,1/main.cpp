#include <bits/stdc++.h>

using namespace std;
vector <pair <int,int > >iteminfo (1000) ;
int profit_array[100][100] = {0} ;
int track_array [100][100] = {0} ;
void select_item (int n ,int k)
{
    int selected_item = track_array [n][k] ;
    if (n==0 || k<=0)
    {
        return ;
    }
    else if (n== selected_item )
    {
        select_item(--n , k-iteminfo[selected_item].second) ;

    }
    else
    {
        selected_item =0 ;
        select_item(--n , k) ;


    }
    if (selected_item )
    {
        cout<<"Selected Item : "<<selected_item<<endl;
    }
}

int main()
{
    int knapsack,profit,weight,index=1;
    ifstream input("test.txt");
    if (input.is_open())
    {
        cout<<"File Open "<<endl;
        input>>knapsack ;
        while (input>>profit>>weight)
        {
            iteminfo[index] =make_pair(profit,weight) ;
            index ++ ;

        }
        for (int i=1 ; i<index ; i++)
        {
            cout<<"Profit : "<<iteminfo[i].first<<" Weight : "<<iteminfo[i].second<<endl;
        }

        for (int i=1; i<index ; i++)
        {

            for (int j=1; j<=knapsack ; j++)
            {
                pair <int,int >frnt =iteminfo[i] ;

                if (frnt.second > j)
                {
                    profit_array[i][j] = profit_array [i-1][j] ;
                    track_array[i][j] = track_array[i-1][j] ;

                }
                else
                {

                    int pre_profit= profit_array[i-1][j] ;
                    int new_profit= frnt.first + profit_array[i-1][j-frnt.second] ;

                    if (pre_profit>new_profit )
                    {
                        profit_array[i][j] = profit_array [i-1][j] ;
                        track_array[i][j] = track_array[i-1][j] ;
                    }
                    else
                    {
                        profit_array[i][j] =new_profit ;
                        track_array[i][j] = i;
                    }
                }

            }
        }

        cout<<"Profit Array "<<endl;
        for (int i=0 ;i<index ;i++)
        {
            for (int j=0 ;j<=knapsack ;j++)
            {
                cout<<profit_array[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<"Track array "<<endl;
        for (int i=0 ;i<index ;i++)
        {
            for (int j=0 ;j <= knapsack ;j++)
            {
                cout<<track_array [i][j]<<"  ";
            }
            cout<<endl;
        }

        cout<<endl<<"Maximum Profit : "<<profit_array[index-1][knapsack] <<endl<<endl;
        select_item (index-1 ,knapsack) ;



    }
    else
        cout<<"File Not Open "<<endl;

    return 0;
}
