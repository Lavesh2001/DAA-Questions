/*
Given a sorted array of positive integers, design an algorithm and implement it using a program to 
find three indices i, j, k such that arr[i] + arr[j] = arr[k]
*/
#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,k; 
    cin>>t;
    for(int c=0;c<t;c++)
    {
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                    break;
                }
            }
            if(k<n)
            break;
        }
        if(j<n-1)
        break;
    }
    if(i==n-2)
    cout<<"No sequence found"<<endl;
    }
    return 0;  
}