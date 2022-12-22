/*Alice and Bob are playing a game of table tennis where irrespective of the point scored, every player makes 22 consecutive serves before the service changes. Alice makes the first serve of the match. Therefore the first 22 serves will be made by Alice, then the next 22 serves will be made by Bob and so on.

Let's consider the following example match for more clarity:

Alice makes the 1^{st}1 
st
  serve.
Let us assume, Bob wins this point. (Score is 00 for Alice and 11 for Bob)
Alice makes the 2^{nd}2 
nd
  serve.
Let us assume, Alice wins this point. (Score is 11 for Alice and 11 for Bob)
Bob makes the 3^{rd}3 
rd
  serve.
Let us assume, Alice wins this point. (Score is 22 for Alice and 11 for Bob)
Bob makes the 4^{th}4 
th
  serve.
Let us assume, Alice wins this point. (Score is 33 for Alice and 11 for Bob)
Alice makes the 5^{th}5 
th
  serve.
And the game continues \ldots…
After the score reaches PP and QQ for Alice and Bob respectively, both the players forgot whose serve it is. Help them determine whose service it is.
*/



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int x,y;
	    cin>>x>>y;
        if((x+y)%4==0 || (x+y)%4==1)
        cout<<"Alice\n";
        else
        cout<<"Bob\n";
	}
	return 0;
}
