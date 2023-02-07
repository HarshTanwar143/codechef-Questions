/*
Problem
Chef goes to the supermarket to buy some items. Luckily there's a sale going on under which Chef gets the following offer:

If Chef buys 3 items then he gets the item (out of those 3 items) having the lowest price as free.

Chef buys 3 items having prices A,B and C respectively. What is the amount of money Chef needs to pay*/



#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int arr[] = {a,b,c};
        sort(arr,arr+3);
        cout<<(a+b+c)-arr[0]<<endl;
        
    }
}