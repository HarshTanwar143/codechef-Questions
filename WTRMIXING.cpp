/*Chef is setting up a perfect bath for himself. He has XX litres of hot water and YY litres of cold water.
The initial temperature of water in his bathtub is AA degrees. On mixing water, the temperature of the bathtub changes as following:

The temperature rises by 11 degree on mixing 11 litre of hot water.
The temperature drops by 11 degree on mixing 11 litre of cold water.
Determine whether he can set the temperature to BB degrees for a perfect bath.*/



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(a==b)
	    cout<<"yes\n";
	    else if(a>b){
	        if((a-b)<=y)
	        cout<<"yes\n";
	        else
	        cout<<"no\n";
	    }
	    else{
	        if((b-a)<=x)
	        cout<<"yes\n";
	        else
	        cout<<"no\n";
	    }

	}
	return 0;
}
