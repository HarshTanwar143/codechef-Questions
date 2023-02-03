#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,ans=1;
	    cin>>a;
	    for(int i = 1;i<=a;i++ ){
	        ans *= i;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
