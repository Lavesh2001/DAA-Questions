/*
Given a graph, design an algorithm and implement it using a program to find if a graph is bipartite or not. 
*/  
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  bool checkBipartite(int node,vector<int>adj[],vector<int>&color)
 {
    
     queue<int>q;
        q.push(node);
        color[node]=1;
        while(q.size()>0)
        {
            int temp=q.front();
            q.pop();
            for(auto i:adj[temp])
            {
                if(color[i]==-1)
                {
                   if(color[temp]==0)
                       color[i]=1;
                    else
                        color[i]=0; 
                    q.push(i);
                }
               else if(color[i]==color[temp])
                    return false;
                
            }
        } 
     return true;
 }
bool isBipartite(vector<int>adj[],int n) { 
        vector<int>color(n,-1);
           for(int i=0;i<n;i++)
           {      
               if(color[i]==-1)
                 if(!checkBipartite(i,adj,color))
                     return false; 
           }
                    return true;
    }
int main()
{   
    int n,e,u,v;
    cin>>n>>e; 
    vector<int>adj[n];
    for(int i=0;i<e;i++)
    {  
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
     if(isBipartite(adj,n))
     cout<<"Yes Bipartite";
     else
     {
         cout<<"Not Bipartite";
     }
    return 0;
}