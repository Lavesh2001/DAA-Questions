/*
Given an array of integers of size n, design an algorithm and write a program to check whether this
array contains duplicate within a small window of size k < n.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[],int n,int k)
{    
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
    if (s.find(arr[i]) != s.end())
            return true;
    s.insert(arr[i]);
    if (i>= k)
     s.erase(arr[i-k]);
    }
    return false;
}
int main()
{
    int n,k,t;
    cin>>t;
    for(int c=0;c<t;c++)
    {
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    cin>>k;
    if(solve(arr,n,k))
    {
        cout<<"Duplicate present in window "<<k<<endl;
    }
    else    
    {
        cout<<"Duplicate not present in window "<<k<<endl;
    }
    }
    return 0;
}
