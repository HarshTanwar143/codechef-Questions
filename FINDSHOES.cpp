#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
        int n,m;
        cin>>n>>m;
        if(m>=n){
            cout<<n<<endl;
        }
        else{
            cout<<m+(n-m)*2<<endl;
        }
	}
	return 0;
}
