#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
    int pa,pb,qa,qb;
    cin>>pa>>pb>>qa>>qb;
    int maxP,maxQ ;
    if(pa>pb){
        maxP = pa;
    }
    else{
        maxP = pb;
    }
    if(qa>qb){
        maxQ = qa;
    }
    else{
        maxQ = qb;
    }
    if(maxP<maxQ){
        cout<<"P"<<endl;
    }
    else if(maxP==maxQ){
        cout<<"TIE\n";
    }
    else{
        cout<<"Q"<<endl;
    }
    
	}
	return 0;
}
