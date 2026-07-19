#include<iostream>
using namespace std;
int main(){
    int n=3;
    cout<<"printing triplets"<<endl;
  // Basic Array Ex  
  int arr[3]={10,20,30};
   
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    for(int k=0;k<n;k++){  // triplet use karne ke liye teen lopps are used.
        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
cout<<endl;
    }
}

}

}
