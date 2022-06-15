/*
Given an array of nonnegative integers, Design an algorithm and implement it using a program
to find two pairs (a,b) and (c,d) such that a*b = c*d, where a, b, c and d are distinct elements of array
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
void solve(int arr[],int n)
{
    map<int, pair<int, int> > mp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
              int prod=arr[i]*arr[j];
              if(mp.find(prod)==mp.end())
              mp[prod]=make_pair(i,j);
              else{ 
                pair<int,int>p=mp[prod];
                cout<<arr[p.first]<<" "<<arr[p.second]<<endl;
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return;
              }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    solve(arr,n);

    return 0;
}