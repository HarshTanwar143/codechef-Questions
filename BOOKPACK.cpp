/*Problem
Chef is moving to a new house!

Unfortunately, this means he now has to pack up his things so that they can be moved too. Currently, Chef is packing up his (rather impressive) book collection into cardboard boxes.

Chef has 
�
X shelves of books, each of which contains exactly 
�
Y books. Each cardboard box can hold at most 
�
Z books. In order to not mess up the organization of the books, Chef will also ensure that books from different shelves will not be placed in the same box.

Under these conditions, what is the minimum number of boxes needed to pack all the books?*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(y%z==0)
        cout<<(y/z) * x<<endl;
        else
        cout<<(y/z + 1) * x<<endl;
    }
}