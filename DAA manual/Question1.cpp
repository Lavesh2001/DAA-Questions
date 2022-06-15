/* 
Given an array of nonnegative integers, design a linear algorithm and implement it using a program
to find whether given key element is present in the array or not. Also, find total number of
comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
*/
#include<iostream>
using namespace std;
int main()
{
    int t,n,key,comp=0,i; 
    cin>>t;
    for(int j=0;j<t;j++)
    {
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>key;
    comp=0;
    for(i=0;i<n;i++)
    {    
        comp++;
        if(key==arr[i])
        break;
    }
    if(i==n)
    cout<<"Not Present"<<" "<<comp<<endl;
    else
    cout<<"Present"<<" "<<comp<<endl;
    }
    return 0;   
}