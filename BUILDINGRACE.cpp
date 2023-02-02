#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a/x == b/y)
        cout<<"BOTH\n";
        else if (a/x < b/y)
        cout<<"CHEF\n";
        else 
        cout<<"CHEFINA\n";
    }
}