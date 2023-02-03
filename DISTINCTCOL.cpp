#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
    int n,max =0;;
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++){
        cin>>arr[i];
        if(arr[max]<arr[i])
        max = i;
    }
    cout<<arr[max]<<endl;
	}
	return 0;
}
