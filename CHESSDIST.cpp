/*The Chessboard Distance for any two points (X_1, Y_1)(X1,Y1) and (X_2, Y_2)(X2,Y2)
 on a Cartesian plane is defined as max(|X_1 - X_2|, |Y_1 - Y_2|)max(∣X1−X2∣,∣Y1−Y2∣).
You are given two points (X_1, Y_1)(X1,Y1) and (X_2, Y_2)(X2,Y2).
 Output their Chessboard Distance.
Note that, |P|∣P∣ denotes the absolute value of integer PP. For example, |-4| = 4∣−4∣=4 and |7| = 7∣7∣=7.*/



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<max(abs(a-c),abs(b-d))<<endl;
        
	}
	return 0;
}
