/*
Given an array of elements. Assume arr[i] represents the size of file i. Write an algorithm and a
program to merge all these files into single file with minimum computation. For given two files
A and B with sizes m and n, computation cost of merging them is O(m+n). (Hint: use greedy approach)
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,n1,n2;
    cin>>n;
    vector<int>file;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        file.push_back(num);
    }
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=0;i<n;i++)
    {
        q.push(file[i]);
    }
    int res=0;
    while(q.size()>1)
    {
         n1=q.top();
        
         q.pop(); 
         n2=q.top();
          q.pop();
         res+=(n1+n2);
         q.push(n1+n2);
    }
    cout<<res;
    return 0;
}