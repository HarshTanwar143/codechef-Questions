#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
    int x,y;
    cin>>x>>y;
    int need = (y-x);
    if(need%8==0){
        cout<<(need/8)<<endl;
    }
    else{
        cout<<(need/8)+1<<endl;
    }
	}
	return 0;
}
