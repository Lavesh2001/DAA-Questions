/*
Given an unsorted array of integers, design an algorithm and a program to sort the array using
insertion sort. Your program should be able to find number of comparisons and shifts ( shifts -
total number of times the array elements are shifted from their place) required for sorting the array.
*/
#include <iostream>

using namespace std;

void insertion_sort(int *arr,int n,int &comp,int &shift)
{   
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        comp++;
        while(j>=0&&arr[j]>temp)
        {   
            comp++;
            shift++;
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main()
{   
    int n,comp=0,shift=0,i,t;  
    cin>>t;
    for(int c=0;c<t;c++)
    {
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i];
    comp=0,shift=0;
    insertion_sort(arr,n,comp,shift);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"comparisions="<<comp<<endl;
    cout<<"shifts="<<shift<<endl; 
    }
    return 0;
}


