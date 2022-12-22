/*Chef is playing with weights. He has an object weighing W units. He also has three weights each of X,Y, and Z units respectively. 
Help him determine whether he can measure the exact weight of the object with one or more of these weights.
If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.*/



#include<bits/stdc++.h>
using namespace std;

void yes_no(int w,int x,int y,int z){
    if((x+y+z) == w || (x+y)==w || (y+z)==w || (z+x)==w || x==w || y==w || z==w)
    cout<<"yes\n";
    else
    cout<<"no\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    yes_no(w,x,y,z);
    }
    return 0;
}