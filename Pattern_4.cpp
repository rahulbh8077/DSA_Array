#include<iostream>
using namespace std;

 void pattern3(int n) {
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main()
{
    int n;
    cout<<"Enter the no of inputs please to run smooothly";
    cin>>n;
    pattern3(n);
    return 0;
}
// The output will be listed  as follows
// *****
// ****
// ***
// **
// *
