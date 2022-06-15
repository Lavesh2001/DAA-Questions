/*
Given an unsorted array of integers, design an algorithm and implement a program to sort this
array using selection sort. Your program should also find number of comparisons and number of
swaps required.
*/
#include <iostream>

using namespace std;

void selection_sort(int *arr,int n,int &comp,int &swap)
{   
    int i,j,mn,temp;
    for(i=0;i<n-1;i++)
    {   
        mn=i;
        for(j=i+1;j<n;j++)
        {   comp++;
            if(arr[j]<arr[mn])
            mn=j;
        }
       
        if(mn!=i)
        {  
            swap++;
            temp=arr[mn];
            arr[mn]=arr[i];
            arr[i]=temp;
        }
    }
}
int main()
{   
    int n,comp=0,swap=0,i,t;
    cin>>t;
    for(int c=0;c<t;c++)
    {
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i]; 
    swap=0,comp=0;
    selection_sort(arr,n,comp,swap);
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"comparisions="<<comp<<endl;
    cout<<"swaps="<<swap<<endl;
    }
    return 0;
}

