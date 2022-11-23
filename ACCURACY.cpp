#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int x;
	    cin>>x;
	    if(x%3==0){
	        cout<<"0\n";
	    }
	    else{
	        int correct = (x/3)+1;
	        int answer = correct*3;
	        int incorrect = answer - x;
	        cout<<incorrect<<endl;
	    }
	}
	return 0;
}
