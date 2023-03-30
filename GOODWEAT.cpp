// question link :  codechef.com/problems/GOODWEAT



#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	int x;
	while(test--){
	    vector<int> v;
	    for(int i = 0;i<7;i++){
	        cin>>x;
	        v.push_back(x);
	    }
	    int sunny = count(v.begin(),v.end(),1);
	    int rainy = count(v.begin(),v.end(),0);
	    if(sunny>rainy)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
