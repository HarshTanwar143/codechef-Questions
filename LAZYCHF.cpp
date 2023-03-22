/*Read problem statements in Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
Chef is a very lazy person. Whatever work is supposed to be finished in 
�
x units of time, he finishes it in 
�
∗
�
m∗x units of time. But there is always a limit to laziness, so he delays the work by at max 
�
d units of time. Given 
�
,
�
,
�
x,m,d, find the maximum time taken by Chef to complete the work.*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x,m,d;
        cin>>x>>m>>d;
        cout<<min(m*x,x+d)<<endl;
    }
}