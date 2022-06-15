/*
Given a directed graph, write an algorithm and a program to find mother vertex in a graph. A
mother vertex is a vertex v such that there exists a path from v to all other vertices of the graph.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int find_mtother(int v,vector<int>&adj)
{
    vector<int>visited(v,false);
}
int main()
{
    int v,e,n1,n2;
    cin>>v;
    vector<int>adj[v];
    for(int i=0;i<n;i++)
    {
        cin>>n1>>n2;
        adj[n1].push_back(n2);
    } 
    int mother=find_mother(v,adj);
}