/*
Chef has an array A of length N consisting of 1 and -1 only.
In one operators , Chef can choose any index i (1<i<N) and multiply
the element Ai by -1.

Find the minimum number of operations required to make the sum of the array equal to 0.
 Output -1 if the sum of the array cannot be made 0.
*/





#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],sum=0;
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if(n%2!=0)
        cout<<"-1\n";
        else
        cout<<abs(sum)/2<<endl;
    
    }
}