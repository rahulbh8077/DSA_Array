#include<iostream>
using namespace std;

void reverse(int arr[],int n){
int left=0;                    // left and right pointers type bana diya hai left ++ aage jayega and right wallla peeche aaaega

int right=n-1;
while(left<=right){    // agar left aagee chala gya to swap hone main dikkat hogi
    swap(arr[left],arr[right]);
    left++;
    right--;         

}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
int main(){
 int n;
 cout<<"Enter the size of array: ";
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cout<<"enter the element of array: "; 
    cin>>arr[i];
 }
   reverse(arr, n);
return 0;
}

// passing arguments main size pass karna is important.
// for good practice 
