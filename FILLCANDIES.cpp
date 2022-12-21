/*Chef received NN candies on his birthday. He wants to put these candies in some bags. 
A bag has K pockets and each pocket can hold at most M candies.
Find the minimum number of bags Chef needs so that he can put every candy into a bag.*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
        int n,k,m;
        cin>>n>>k>>m;
        if(n%m==0){
            int poc = (n/m);
            if(poc%k == 0){
                cout<<poc/k<<endl;
            }
            else{
                cout<<(poc/k)+1<<endl;
            }
        }
        else{
            int poc = (n/m)+1;
            if(poc%k==0){
                cout<<(poc/k)<<endl;
            }
            else{
                cout<<(poc/k)+1<<endl;
            }
        }
	}
	return 0;
}
