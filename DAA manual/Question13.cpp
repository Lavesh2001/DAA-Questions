/*
Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and
implement it using a program to find which alphabet has maximum number of occurrences and
print it. (Time Complexity = O(n)) (Hint: Use counting sort)
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()  
{   
    int t,l;
    cin>>t;
    for(int c=0;c<t;c++){
    int count[26];
    memset(count,0,sizeof(count));
    string str;
    cin>>l;
    cin>>str;
    for(int i=0;i<l;i++)
    {
        count[str[i]-97]++;
    }
    int mx=0;
    for(int i=0;i<l;i++)
    {
        if(count[i]>count[mx])
        {
            mx=i;
        }
    }
    char ch;
    if(count[mx]==1)
    cout<<"No Duplicates Present"<<endl;
    else
    for(int i=0;i<26;i++)
    {
        if(count[i]==count[mx])
        {
            ch=i+97;
            cout<<ch<<"-"<<count[mx]<<endl;
            break;
        }
    }
    }
    return 0;
}
