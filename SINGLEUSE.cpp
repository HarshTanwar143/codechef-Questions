#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,x,y;
        cin>>h>>x>>y;

        int damage = ceil((h-y)/(x*1.0)) + 1;
        if(h<=y){ damage = 1; }
        
        cout<<damage<<endl;
        
    }
}