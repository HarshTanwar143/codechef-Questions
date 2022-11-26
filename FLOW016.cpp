// #include <iostream>
#include<bits/stdc++.h>
// #include<boost/math/common_factor.hpp>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long a,b;
	    cin>>a>>b;
	   // cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
	   int x = a,y= b;
	   while(x!=y){
	       if(x>y){
	           x = x-y;
	       }
	       else{
	           y = y-x;
	       }
	   }
	   long long gcd,lcm;
	   gcd = x;
	   lcm = (a*b)/gcd;
	   cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}
