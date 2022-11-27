#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
        int x,y;
        cin>>x>>y;
        int person = y*2;
        if(person>x){
            cout<<"0\n";
        }
        else if(x%person==0){
            cout<<x/person<<endl;
        }
        else{
            cout<<(x/person)<<endl;
        }
	}
	return 0;
}
