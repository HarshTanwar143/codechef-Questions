#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    string s;
	    cin>>n;
	    cin>>s;
	    int i = 0;
	    while(s[i] != '\0'){
	        if(s[i]=='A'){
	            cout<<'T';
	        }
	        else if(s[i]=='T'){
	            cout<<'A';
	        }	       
	        else if(s[i]=='C'){
	            cout<<'G';
	        }	        
	        else if(s[i]=='G'){
	            cout<<'C';
	        }
	        i++;
	    }
	    cout<<endl;
	}

	return 0;
}
