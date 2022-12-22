/*Chef's phone has a total storage of S MB. Also, Chef has 2 apps already installed on his phone which occupy X MB and Y MB respectively.
He wants to install another app on his phone whose memory requirement is Z MB. For this, he might have to delete the apps already installed on his phone.
Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app.*/



#include<iostream>
using namespace std;

void ans(int s,int x,int y,int z){
    int need = (x+y+z)-s;
    if(need<=0){
        cout<<"0\n";
    }
    else{
        if(need>x and need>y)
        cout<<"2\n";
        else
        cout<<"1\n";
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int s,x,y,z;
        cin>>s>>x>>y>>z;
        ans(s,x,y,z);
    }
    return 0;
}