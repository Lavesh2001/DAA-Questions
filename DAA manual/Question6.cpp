/*
Given an array of nonnegative integers, design an algorithm and a program to count the number
of pairs of integers such that their difference is equal to a given key, K.
*/ 
#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,k,count=0; 
    cin>>t;
    for(int c=0;c<t;c++)
    {
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i]; 
    count=0;
    cin>>k;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])==k)
            count++;
        }
    }
    cout<<count<<endl;
    }
    return 0;  
}