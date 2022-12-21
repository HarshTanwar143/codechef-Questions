/*Chef is playing a variant of Blackjack, where 3 numbers are drawn and each number lies between 1 and 10 (with both 1 and 10 inclusive). Chef wins the game when the sum of these 33 numbers is exactly 2.

Given the first two numbers A and B, that have been drawn by Chef, what should be 3-rd number that should be drawn by the Chef in order to win the game?

Note that it is possible that Chef cannot win the game, no matter what is the 3-rd number. In such cases, report -1 as the answer.*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sol = 21 - (a+b);
        if(sol>=1 and sol<=10)
        cout<<sol<<endl;
        else
        cout<<-1<<endl;
    }
	return 0;
}
