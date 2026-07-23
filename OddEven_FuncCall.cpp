#include<iostream>
using namespace std;

void evenodd (int n){
    if(n%2==0){
        cout<< "Given No is EVEN"<< endl;
    }
    else {
        cout<< "No is odd"<< endl; // function create karna sekhle bhai
    }
}
int main(){
    int n;
cout<< "ENTER THE NO TO CHECK EVEN OR ODD"<< endl;
cin>> n;
evenodd(n);




}
    
