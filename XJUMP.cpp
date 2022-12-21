/*The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input containing two space separated integers X and Y denoting 
the number of stair Chef wants to reach and the number of stairs he can climb in one move.*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<x%y+x/y<<endl;
    }
	return 0;
}
