/*CodeChef recently revamped its practice page to make it easier for users to identify the next problems they should solve by introducing some new features:

Recent Contest Problems - Contains only problems from the last 2 contests
Separate Un-Attempted, Attempted, and All tabs
Problem Difficulty Rating - The Recommended dropdown menu has various difficulty ranges so that you can attempt the problems most suited to your experience
Popular Topics and Tags
Chef has been participating regularly in rated contests but missed the last two contests due to his college exams. He now wants to solve them and so he visits the practice page to view these problems.

Given a list of 
�
N contest codes, where each contest code is either START38 or LTIME108, help Chef count how many problems were featured in each of the contests.*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;while(t--)
    {
        int n,a=0,b=0;cin>>n;
        string st;
        while(n--)
        {
            cin>>st;
            if(st.at(0)=='S') a++;
            else b++;
        }
        cout<<a<<" "<<b<<endl;
    }
}