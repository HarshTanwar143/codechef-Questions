#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(b>=a and b>=c){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"no\n";
	    }
	}
	return 0;
}
