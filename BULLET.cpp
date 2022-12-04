#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
    int x,y,z;
    cin>>x>>y>>z;
    int t = y/x;
    if(z<t){
        cout<<0<<endl;
    }
    else{
        cout<<(z-t)<<endl;
    }
	}
	return 0;
}
