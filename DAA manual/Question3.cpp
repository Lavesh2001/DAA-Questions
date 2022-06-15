/*
Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether a given key element is present in the sorted array or not. For an array
arr[n], search at the indexes arr[0], arr[2], arr[4],. ,arr[2k] and so on. Once the interval (arr[2k] <key < arr[ 2k+1] ) is found, 
perform a linear search operation from the index 2k to find the element
key. (Complexity < O(n), where n is the number of elements need to be scanned for searching):
Jump Search
*/ 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void jump_search(int arr[],int n,int key)
{
    int l=0,u=0,comp=0;
    while(arr[u]<=key&&u<n)
    {  
        comp++,l=u;
        if(u==0)
        u=2;
        else
        u*=2; 
    } 
    u=min(u,n);
    for(int i=l;i<u;i++)
    {
        if(arr[i]==key){
        cout<<"Present"<<" "<<comp<<endl;
        return;
        }
    }
    cout<<"Not Present"<<" "<<comp<<endl;
}
int main()
{
    int t,n,key,i; 
    cin>>t;
    for(int j=0;j<t;j++)
    {
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>key; 
    jump_search(arr,n,key);
    }
    return 0;  
}