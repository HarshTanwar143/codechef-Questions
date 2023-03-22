/*Ther are 3 problems in a contes namely A,B,C resp. Alice bets Bob that problem C
is the hardest while Bob says that problem B will be the hardest .

You are given three integers Sa,Sb,Sc which denotest the number ofo successful submissions
of the problems A,B,C resp. It is guaranteed that each problem has a different number of 
submissions. Determine who wins the bet .

1. if Alice whins the bet ,then Output Alice
2. if Bob wins the bet ,then output Bob.
3. if no ne wins the bet , then output Draw .
*/




#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>a>>b>>c;
        int arr[3] = {a,b,c};
        sort(arr,arr+3);
        if(arr[0]==a)
        cout<<"Draw\n";
        else if(arr[0]==b)
        cout<<"Bob\n";
        else if(arr[0]==c)
        cout<<"Alice\n";
    }
}