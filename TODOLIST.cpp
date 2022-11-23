#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n,count=0;
	    cin>>n;
	    
	    for(int i =0;i<n;i++){
	        int a ;
	        cin>>a;
	        if(a>=1000){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
