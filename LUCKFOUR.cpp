#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int a,count = 0;
        cin>>a;
        while(a != 0){
            int d = a%10;
            if(d==4)
            count++;
            a /= 10;
        }
        cout<<count<<endl;
    }
}