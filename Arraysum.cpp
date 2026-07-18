#include<iostream>
using namespace std;
int main(){
int n=5;
int arr[5]={3,4,5,6,7};
// # printing the array initially.
cout<<"ARRAY AT INTIALLY"<<endl;
for( int i=0;i<n;i++){
    cout<< arr[i]<< " ";

}
cout<< endl;
cout<<"ARRAY after sum"<<endl;
int sum=0;
for(int i=0;i<n;i++){
    sum=sum+ arr[i];  // multiplication code is similar we just have to int mul=1 and rest saem ordeer
  
}
  cout<< "sum is :"<< sum<<" ";
}
