/*Alice is driving from her home to her office which is A kilometers away and will take her X hours to reach.
Bob is driving from his home to his office which is B kilometers away and will take him Y hours to reach.

Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.*/




#include <iostream>
using namespace std;


	void solution (float a,float x,float b,float y){
        float sa = a/x, sb = b/y;
        if(sa == sb)
        cout<<"Equal\n";
        else if(sa>sb)
        cout<<"Alice\n";
        else
        cout<<"Bob\n";
	}

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
        float a,x,b,y;
        cin>>a>>x>>b>>y;
        solution(a,x,b,y);
	}
	return 0;
}
