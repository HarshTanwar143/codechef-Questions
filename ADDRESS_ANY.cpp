//print any row cloumn element address

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the order of Matrix (row and column) :: ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter the elements of matrix :: ";
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"Your matrix is :: "<<endl;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    char ch ;
    int h;
    cout<<"Enter your Base Address :: ";
    cin>>h;
    do{
        int x = h;
    int k,l;
    cout<<"\nEnter desired address of particlular element (give row and address) :: ";
    cin>>k>>l;
    if (k<=m and l<=n){
    if(k<l || (k==1 && l==1)){
        x += (k*l - 1)*4;
        cout<<x<<endl;
    }
    else{
        x += ((k-1)*n + l -1)*4;
        cout<<x<<endl;
        }
    }
    else{
        cout<<"you enter a wrong pair of row and column \n";
         
    }
    cout<<"\nDo you want to check again (y/n) :: ";
    cin>>ch;
    
    
    }while(ch == 'y');
    
    
}