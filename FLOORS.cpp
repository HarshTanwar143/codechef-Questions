/*Chef and Chefina are residing in a hotel.

There are 1010 floors in the hotel and each floor consists of 1010 rooms.

Floor 1 consists of room numbers 1 to 10.
Floor 2 consists of room numbers 11 to 20.
\ldots…
Floor i consists of room numbers 10.(i-1) + 1 to 10.i.
You know that Chef's room number is X while Chefina's Room number is Y.
If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.*/




#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	float test;
	cin>>test;
	while(test--){
	    float x,y;
	    cin>>x>>y;
        cout<<abs(ceil(x/10) - ceil(y/10))<<endl;
	}
	return 0;
}
