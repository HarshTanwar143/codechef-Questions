#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    if(y%x==0 and (y/x)<=n){
	        cout<<"yes\n";
	    }
	    else{
	        cout<<"no\n";
	    }
	}
	return 0;
}
