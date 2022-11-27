#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
    int A,B;
    cin>>A>>B;
    int sum = A+B;
    int i ;
    for(i = 2;i<sum;i++){
        if(sum%i==0){
            cout<<"BOB\n";
            break;
             }
        }
        if(i==sum){
            cout<<"ALICE\n";
        }

	}
	return 0;
}
