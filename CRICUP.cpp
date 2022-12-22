/*It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to D.

Given that the skills of the teams competing in the final are X and Y respectively, determine whether Chef will find the game interesting or not.*/




#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int x,y,d;
        cin>>x>>y>>d;
        if(abs(x-y)<=d)
        cout<<"yes\n";
        else
        cout<<"no\n";
    }
}