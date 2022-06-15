/*
Given an unsorted array of integers, design an algorithm and implement it using a program to
find Kth smallest or largest element in the array. (Worst case Time Complexity = O(n))
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t,n,i,k; 
    cin>>t;
    for(int j=0;j<t;j++)
    {
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>k;
    set<int> s(arr, arr + n);
    set<int>::iterator itr= s.begin();
    if(k>n)
    cout<<"not present"<<endl;
    else{
        advance(itr, k - 1);  
        cout<<*itr<<" ";
        set<int>::iterator itr= s.begin();
         advance(itr,n-k);  
         cout<<*itr<<endl;
    }
    }
    return 0;
}