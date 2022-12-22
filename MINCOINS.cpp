/*Chef has infinite coins in denominations of rupees 5 and rupees 10.
Find the minimum number of coins Chef needs, to pay exactly X rupees.
 If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print −1.*/



#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%5==0){
            if(x%10==0)
            cout<<(x/10)<<endl;
            else if(x%10!=0){
                int a = x/10;
                cout<<a+((x-a*10)/5)<<endl;
            }
        }
        else
        cout<<-1<<endl;
    }
    return 0;
}