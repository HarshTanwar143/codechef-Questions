/*Write a program to obtain a number N and increment its value by 1 
if the number is divisible by 4 otherwiseotherwise decrement its value by 1.

*/




#include <iostream>
using namespace std;

void ans(){
    int n;
    cin>>n;
    if(n%4==0)
    cout<<n+1<<endl;
    else
    cout<<n-1<<endl;
}

int main() {
	// your code goes here
	ans();
	return 0;
}
