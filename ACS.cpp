#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int p,count = 0;
        cin>>p;
        count = p/100;
        p = p%100;
        count += p;
        if(count<= 10)
        cout<<count<<endl;
        else
        cout<<"-1"<<endl;
    }
}