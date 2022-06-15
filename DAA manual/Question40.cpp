/*
Given a number n, write an algorithm and a program to find nth ugly number. Ugly numbers are
those numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12,
15, 16, 18, 20, 24,. is sequence of ugly numbers.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    for(int c=0;c<t;c++)
    {
    cin>>n;
    int ugly[n];
    ugly[0]=1;
    int num2=2,num3=3,num5=5,next_ugly=1,i2=0,i3=0,i5=0;
    for(int i=1;i<n;i++)
    {
        next_ugly=min(num2,min(num3,num5));
        ugly[i]=next_ugly;
        if(next_ugly==num2)
        {
            i2+=1;
            num2=ugly[i2]*2;
        }
        if(next_ugly==num3)
        {
            i3+=1;
            num3=ugly[i3]*3;
        }
        if(next_ugly==num5)
        {
            i5+=1;
            num5=ugly[i5]*5;
        }
    }
    cout<<next_ugly<<endl;
    }
    return 0;
}