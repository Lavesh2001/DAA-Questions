/*
Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input).
*/
#include<iostream>
using namespace std;
int main()
{
    int t,n,key,comp=0,i,l,u,mid; 
    cin>>t;
    for(int j=0;j<t;j++)
    {
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>key;
    comp=0,l=0,u=n-1;
    while(l<=u)
    {
        mid=(l+u)/2; 
        comp++;
        if(arr[mid]==key){
            cout<<"Present"<<" "<<comp<<endl;
            break;
        }
        else if(arr[mid]<key)
        l=mid+1;
        else
        u=mid-1;
    }
    if(l>u)
    cout<<"Not Present"<<" "<<comp<<endl;
    }
    return 0;  
}