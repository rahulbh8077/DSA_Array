#include<iostream>
#include <limits.h>
using namespace std;
void minelement(int arr[], int size){

    int min=INT_MAX; // good practise to intiliase int min  with int max and iska ulta for max function
    for(int i=0;i<size;i++){
        if( arr[i]< min){ // will calculate untill the  size of array element is less than the main size.
            min=arr[i];

        }
    } 
    cout<<"min element is:"<< min<<endl;
    
}
// functon calling in main input values
int main(){
int arr[7]={10,2,34,56,78,43,205};
int size=7;
minelement(arr,size);
}
