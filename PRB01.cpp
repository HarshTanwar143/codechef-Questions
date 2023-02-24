/*
Problem
Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not .*/



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    bool pn = true;
	    if(n<2){
	        pn = false;
	    }
	    for(int i = 2;i<=sqrt(n);i++){
	        if(n%i==0)
	        pn = false;
	    }
	    if(pn)
	    cout<<"yes\n";
	    else
	    cout<<"no\n";
	}
	return 0;
}
