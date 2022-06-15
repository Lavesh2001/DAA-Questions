/*
Given a knapsack of maximum capacity w. N items are provided, each having its own value and
weight. You have to Design an algorithm and implement it using a program to find the list of the
selected items such that the final selected content has weight w and has maximum value. You can
take fractions of items,i.e. the items can be broken into smaller pieces so that you have to carry
only a fraction xi of item i, where 0 ≤xi≤ 1
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,w,p;
    cin>>n;
    vector<int>weight;
    vector<int>price;
    for(int i=0;i<n;i++)
    {
        cin>>w;
        weight.push_back(w);
    }
    for(int i=0;i<n;i++)
    {
        cin>>p;
        price.push_back(p);
    }
    cin>>w;
   vector<pair<double,int>>perw;
    for(int i=0;i<n;i++)
    {
        perw.push_back({((double)price[i])/weight[i],i});
    }
    sort(perw.begin(),perw.end()); 
    vector<int>ans(n,0);
    double temp=w; 
         int i=n-1; 
         double res=0;
         while(temp>0)
         {
             if((weight[perw[i].second])<=temp)
             {  
                 res+=price[perw[i].second];
                 temp-=weight[(perw[i].second)];
                 ans[i]=weight[(perw[i].second)];
             }
             else
             {
                 res+=temp*perw[i].first;
                 ans[i]=temp;
                 temp-=temp;
             }
             i--;
         }
     cout<<"Maximum value : "<<res<<endl;
     cout<<"item-weight"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<i+1<<"-"<<ans[i]<<endl;
     }

    return 0;
}