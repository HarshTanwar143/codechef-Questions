#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
        int n,x;
        cin>>n>>x;
        int d = n/2;
        if(x==n or x==0){
            cout<<"0\n";
        }
        else if(x<=d){
            cout<<x<<endl;
        }
        else{
            cout<<(n-x)<<endl;
        }
	}
	return 0;
}
