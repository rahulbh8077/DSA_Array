#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<< "enter the limit"<<endl;
    cin>> n;
for(row=0;row<n;row++){
    for(col=0;col<n;col++){
        if(row==0|| row==n-1|| col==0|| col==n-1){
            cout<< "*";

        }
        else
        cout<<" ";
    }
    cout<<endl;
}
}
// output for n=5
// *****
// *   *
// *   *
// *   *
// *****
