#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if((a*a + b*b)<(x*x + y*y))
    cout<<"BOB\n";
    else if((a*a + b*b)==(x*x + y*y))
    cout<<"EQUAL\n";
    else
    cout<<"ALEX\n";
    }
}