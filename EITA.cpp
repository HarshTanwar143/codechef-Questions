//  link : https://www.codechef.com/problems/EITA


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
    int d,x,y,z;
    cin>>d>>x>>y>>z;
    int work1 = (7*x);
    int work2 = (d*y + (7-d)*z);
    cout<<max(work1,work2)<<endl;
	}
	return 0;
}
