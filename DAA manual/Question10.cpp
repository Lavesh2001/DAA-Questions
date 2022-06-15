/*
Given an unsorted array of integers, design an algorithm and implement it using a program to sort 
an array of elements by dividing the array into two subarrays and combining these subarrays after 
sorting each one of them. Your program should also find number of comparisons and inversions
during sorting the array.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;  
void merge(int *arr,int l,int mid,int u,int &comp,int &inv)
{
    int i=l,j=mid+1,k=l;
    int brr[u+1];
    while(i<=mid&&j<=u){ 
        comp++;
        if(arr[i]<=arr[j])
        {
            brr[k]=arr[i];
            i++;
        }
        else
        {
            brr[k]=arr[j];
            j++;
             inv= inv+(mid - i);
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
void mergesort(int *arr,int l,int u,int &comp,int &inv)
{
    int mid;
    if(l<u){  
        mid=(l+u)/2;
        mergesort(arr,l,mid,comp,inv);
        mergesort(arr,mid+1,u,comp,inv);
        merge(arr,l,mid,u,comp,inv);
    }
}
void count_inv(int *arr,int n,int &comp,int &inv)
{
    mergesort(arr,0,n-1,comp,inv);
}
int main()
{
    int n,i,t,comp,inv;
    cin>>t;
    for(int c=0;c<t;c++){
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i];
    comp=0,inv=0;
    count_inv(arr,n,comp,inv); 
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl<<"comparisons="<<comp<<endl;
    cout<<"inversions="<<inv<<endl;
    
    }
    return 0;
}
