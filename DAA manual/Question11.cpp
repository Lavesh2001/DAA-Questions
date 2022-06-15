/*

*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std; 

int partition(int *arr,int l,int u,int &comp,int &swap)
{
    int pivot=arr[l];
    int start=l,end=u;
    while(start<end)
    {    comp++;
        while(arr[start]<=pivot){
        start++;
         comp++;
        }
         while(arr[end]>pivot){
        end--;
         comp++;
         }
        if(start<end)
        {  
            swap++;
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    } 
    swap++;
    int t=arr[l];
    arr[l]=arr[end];
    arr[end]=t;
    return end;
}
int partition_r(int *arr,int l,int u,int &comp,int &swap)
{
    srand(time(NULL));
    int random = l+ rand() % (u - l);
    swap++;
    int temp=arr[l];
    arr[l]=arr[random];
    arr[random]=temp;
    return partition(arr, l, u,comp,swap);
}
void quicksort(int *arr,int l,int u,int &comp,int &swap)
{
    if(l<u){
        int loc=partition_r(arr,l,u,comp,swap);
        quicksort(arr,l,loc-1,comp,swap);
        quicksort(arr,loc+1,u,comp,swap);
    }
}

int main()
{
    int n,t,swap,comp;
    cin>>t;
    for(int c=0;c<t;c++){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    comp=0,swap=0;
    quicksort(arr,0,n-1,comp,swap);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";  
    cout<<endl<<"comparisons="<<comp<<endl;
    cout<<"swaps="<<swap;
    }

    return 0;
}