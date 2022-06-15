/*
Given an unsorted array of integers, design an algorithm and implement it using a program to find 
whether two elements exist such that their sum is equal to the given key element. 
*/
#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n,t,key,i,j; 
    cin>>t;
    for(int c=0;c<t;c++){
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    sort(arr+0,arr+n);
    cin>>key;
    i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==key)
        {   
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
            break;
        }
        else if(arr[i]+arr[j]>key)
        j--;
        else
        i++;
    }
    if(i>=j)
    cout<<"No such Element Exist";
    }
    return 0;
}