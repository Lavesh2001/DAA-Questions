#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
struct minheapnode
{
    char data;
    int freq;
    minheapnode *left,*right;
    minheapnode(char data,int freq)
    {  
        left=right=NULL;
        this->data=data;
        this->freq=freq;
    }
} ;
struct compare
{
    bool operator()(minheapnode *l,minheapnode *r)
    {
        return (l->freq > r->freq);
    }
}; 
void printcodes(struct minheapnode *root,string str)
{
    if(root==NULL)
    return;
    if(root->data!='$')
    cout<<root->data<<": "<<str<<endl;
    printcodes(root->left,str+"0");
    printcodes(root->right,str+"1");
}
void huffmancodes(char ch[],int freq[],int n)
{
     struct minheapnode *left,*right,*top;
     priority_queue<minheapnode*,vector<minheapnode*>,compare>minheap;
     for(int i=0;i<n;i++)
     {
          minheap.push(new minheapnode(ch[i],freq[i]));
     }
     while(minheap.size()>1)
     {
        left=minheap.top();
        minheap.pop();
        right=minheap.top();
        minheap.pop();

        top=new minheapnode('$',left->freq+right->freq); 
        top->left=left;
        top->right=right;
        minheap.push(top);
     }
     printcodes(minheap.top(),"");
}
int main()
{
    int n;
    cin>>n;
    char ch[n];
    int freq[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
        cin>>freq[i];
    }
    huffmancodes(ch,freq,n);
    return 0;
}