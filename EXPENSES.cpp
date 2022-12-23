/*Chef has made a list for his monthly expenses. The list has N expenses with index 1 to N. 
The money spent on each expense depends upon the monthly income of Chef.
Chef spends 50% of his total income on the expense with index 1.
The money spent on the i th
expense (i>1) is equal to 50\%50% of the amount remaining, after paying for all expenses with indices less than i.
Given that Chef earns 2^X
rupees in a month, find the amount he saves after paying for all N expenses.*/



#include <iostream>
#include<math.h>
using namespace std;


void ans();


int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
    ans();
	}
	return 0;
}

void ans(){
    int n,x;
    cin>>n>>x;
    int income = pow(2,x);
    if(n==1)
    cout<<income/2<<endl;
    else{
        int still = income/2;
        for(int i = 2;i<=n;i++){
            still = still/2;
        }
        cout<<still<<endl;
    }
    
}
















