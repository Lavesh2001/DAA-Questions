/*
Given an unsorted array of positive integers, design an algorithm and implement it using a program 
to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity = O(n log n))
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;  
bool check_duplicates(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
       if(arr[i]==arr[i+1])
       return true;
    }
   return false;
}
void merge(int *arr,int l,int mid,int u)
{
    int i=l,j=mid+1,k=l;
    int brr[u+1];
    while(i<=mid&&j<=u){
        if(arr[i]<=arr[j])
        {
            brr[k]=arr[i];
            i++;
        }
        else
        {
            brr[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid) {
        brr[k]=arr[i];
        i++;
        k++;
    }
    while(j<=u){
        brr[k]=arr[j];
        j++;
        k++;
    }
    for(int k=l;k<=u;k++)
    arr[k]=brr[k];
}
void mergesort(int *arr,int l,int u)
{
    int mid;
    if(l<u){  
        mid=(l+u)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,u);
        merge(arr,l,mid,u);
    }
}
int main()
{
    int n,i,t;
    cin>>t;
    for(int c=0;c<t;c++){
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i];
    mergesort(arr,0,n-1);
    if(check_duplicates(arr,n))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}
