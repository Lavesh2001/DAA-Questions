/*
Given a sorted array of positive integers containing few duplicate elements, design an algorithm
and implement it using a program to find whether the given key element is present in the array or
not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))
*/
#include<iostream>
using namespace std; 
int count_occurences(int arr[],int n,int key)
{
    int l=0,u=n-1,mid,left,right,count=1;
    while(l<=u)
    {
        mid=(l+u)/2;
        if(arr[mid]==key)
        break;
        else if(arr[mid]<key)
        l=mid+1;
        else
        u=mid-1;
    }  
    if(l>u)
    return 0;
    left=mid-1,right=mid+1;
    while(left>=0&&arr[left]==key)
    {
        count++;
        left--;
    }
     while(right<n&&arr[right]==key)
    {
        count++;
        right++;
    }
    return count;
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
    cout<<key<<"-"<<count_occurences(arr,n,key);
    }
    return 0;
}