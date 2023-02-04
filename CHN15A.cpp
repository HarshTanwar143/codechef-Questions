/*Problem
Gru has not been in the limelight for a long time and is, therefore, planning something particularly nefarious. Frustrated by his minions' incapability which has kept him away from the limelight, he has built a transmogrifier — a machine which mutates minions.

Each minion has an intrinsic characteristic value (similar to our DNA), which is an integer. The transmogrifier adds an integer K to each of the minions' characteristic value.

Gru knows that if the new characteristic value of a minion is divisible by 7, then it will have Wolverine-like mutations.

Given the initial characteristic integers of N minions, all of which are then transmogrified, find out how many of them become Wolverine-like.*/



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,count = 0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	        if((arr[i]+k)%7 == 0)
	        ++count;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
