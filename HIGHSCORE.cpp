/*Chef is taking a tough examination. The question paper consists of NN objective problems and each problem has 44 options A, B, C,A,B,C, and DD, out of which, exactly one option is correct.

Since Chef did not study for the exam, he does not know the answer to any of the problems. Chef was looking nearby for help when his friend somehow communicated the following information:

Exactly N_AN 
A
​
  problems have option AA as the answer.
Exactly N_BN 
B
​
  problems have option BB as the answer.
Exactly N_CN 
C
​
  problems have option CC as the answer.
Exactly N_DN 
D
​
  problems have option DD as the answer.*/


#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int na,nb,nc,nd;
        cin>>na>>nb>>nc>>nd;
        if(na>nb and na>nc and na>nd)
        cout<<na<<endl;
        else if (nb>nc and nb>nd )
        cout<<nb<<endl;
        else if (nc>nd)
        cout<<nc<<endl;
        else
        cout<<nd<<endl;
    }
    return 0;
}