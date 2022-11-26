#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int x,a,b;
	    cin>>x>>a>>b;
	   int score = a+b*2;
	   if(score>=x){
	       cout<<"qualify\n";
	   }
	   else
	   cout<<"notqualify\n";
	}
	return 0;
}
