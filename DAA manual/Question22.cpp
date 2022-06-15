/*
Assume that a project of road construction to connect some cities is given to your friend. Map of
these cities and roads which will connect them (after construction) is provided to him in the form
of a graph. Certain amount of rupees is associated with construction of each road. Your friend has 
to calculate the minimum budget required for this project. The budget should be designed in such 
a way that the cost of connecting the cities should be minimum and number of roads required to 
connect all the cities should be minimum (if there are N cities then only N-1 roads need to be 
constructed). He asks you for help. Now, you have to help your friend by designing analgorithm
which will find minimum cost required to connect these cities. (use Prim's algorithm)
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,num;
    cin>>N;
    vector<vector<int>>graph(N,vector<int>(N));
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>num;
            graph[i][j]=num;
        }
    }
    int key[N];
    int parent[N];
    bool mstset[N];
    
    for(int i=0;i<N;i++)
    {
        key[i]=INT_MAX;
        mstset[i]=false; 
    }
    key[0]=0;
    parent[0]=-1;
    for(int count=0;count<N-1;count++)
    {
        int mini=INT_MAX,u;
        for(int i=0;i<N;i++)
        {
            if(mstset[i]==false&&key[i]<mini)
            {
                mini=key[i];
                u=i;
            }
        }
        mstset[u]=true; 
        for(int i=0;i<N;i++)
        {
            if(graph[u][i]&&mstset[i]==false&&key[i]>graph[u][i])
            {     
                 parent[i]=u;
                key[i]=graph[u][i];
            }
        }
    }
    int res=0;
    for(int i=1;i<N;i++)
    {   
        cout<<graph[i][parent[i]]<<" ";
        res+=graph[i][parent[i]];
    }
    cout<<"Minimum Spanning Weight: "<<res<<endl;

    return 0;
}