/*
Given a set of available types of coins. Let suppose you have infinite supply of each type of coin.
For a given value N, you have to Design an algorithm and implement it using a program to find
number of ways in which these coins can be added to make sum value equals to N.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>m;
    int coin[m];
    for(int i=0;i<m;i++)
    {
        cin>>coin[i];
    } 
    cin>>n;
     int t[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0)
                t[i][j]=0;
                if(j==0)
                t[i][j]=1;
            }
        }
         for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(coin[i-1]<=j)
                t[i][j]=t[i][j-coin[i-1]]+t[i-1][j];
                else
                t[i][j]=t[i-1][j];
            }
        }
        cout<<t[m][n]<<endl;

}