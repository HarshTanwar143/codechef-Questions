#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n,ans = 0;
        cin>>n;
        while(n!=0){
            int digit = n%10;
            ans = ans*10 + digit;
            n /= 10;
        }
        cout<<ans<<endl;
    }
    
    
    
    
}