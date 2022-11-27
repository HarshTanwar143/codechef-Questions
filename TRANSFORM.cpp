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
        cout<<"NORMAL\n";
    }
    else if(x%3==1){
        cout<<"HUGE\n";
    }
    else{
        cout<<"SMALL\n";
    }
}
	return 0;
}
