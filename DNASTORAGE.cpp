/*For encoding an even-length binary string into a sequence of A, T, C, and G, we iterate from left to right and replace the characters as follows:

00 is replaced with A
01 is replaced with T
10 is replaced with C
11 is replaced with G
Given a binary string 
�
S of length 
�
N (
�
N is even), find the encoded sequence*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char st[n];
        cin>>st;
        for(int i = 0;i<n;i=i+2)
        {
            if(st[i]=='0' && st[i+1]=='0')
            cout<<'A';
            
            else if(st[i]=='0' && st[i+1]=='1')
            cout<<'T';
            
            else if(st[i]=='1' && st[i+1]=='0')
            cout<<'C';
            
            else if(st[i]=='1' && st[i+1]=='1')
            cout<<'G';
            
        }
        cout<<endl;
    }
}