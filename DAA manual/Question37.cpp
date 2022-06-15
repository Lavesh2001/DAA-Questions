/*
Given an array of characters, you have to find distinct characters from this array. Design an
algorithm and implement it using a program to solve this problem using hashing. (Time
Complexity = O(n))
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    } 
    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}