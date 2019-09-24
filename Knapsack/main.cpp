#include <bits/stdc++.h>

using namespace std;
vector < pair < int,int > >ItemInfo(1000) ;
priority_queue <pair <double ,int  > >pq  ;

int main()
{
    cout<<"File Open "<<endl;
    int knapsack,profit,weight,index =1,totalprofit=0 ;

    ifstream input ("Test.txt") ;
    if (input.is_open())
    {
        input >>knapsack ;
        while (input>>weight >>profit)
        {
            ItemInfo[index]=(make_pair(weight, profit)) ;
            index ++ ;
        }

        for (int i=1 ;i<index ;i++)
        {
            cout<<"Item : "<<i<<" Weight : "<<ItemInfo[i].first<<" Profit : "<<ItemInfo[i].second<<endl;
        }
        double unit_profit =0 ;
        for (int i=1 ;i<index ;i++)
        {
            unit_profit = (double) ItemInfo[i].second / ItemInfo[i].first ;
            pq.push(make_pair(unit_profit,i)) ;

        }

        while (!pq.empty() && knapsack !=0 )
        {

            pair <double ,int > frnt = pq.top();
            pq.pop() ;
            int itemweight = ItemInfo[frnt.second].first ;
            if (itemweight <= knapsack)
            {
                totalprofit += ItemInfo [frnt.second].second ;
                cout<<"Select item : "<<frnt.second<<"weight "<<ItemInfo[frnt.second].first<<" Profit : "<<ItemInfo[frnt.second].second<<endl;


                knapsack -=itemweight ;
            }
            else
            {
                cout<<"Fraction "<<endl;
                totalprofit += knapsack * frnt.first ;
                cout<<"Select item : "<<frnt.second<<"Weight : "<<knapsack<<" Profit : "<<knapsack * frnt.first<<endl;
                cout<<"Fraction "<<knapsack<<" / "<<itemweight<<endl;
                break ;
            }

        }
        cout<<"Total profit "<<totalprofit<<endl;



    }
    else
    {
        cout<<"File Not Open "<<endl;
    }
    return 0;
}
