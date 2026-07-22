#include<iostream>
using namespace std;
int main(){
       cout<< "TO CHECK VALIDITY OF TRIANGLE"<< endl;
       cout<<"ENTER THE SIDES OF TRIANGLE"<< endl;
       int a,b,c;
       cin>> a,b,c;
  // logic sum pf any two sides should be greater than the third side always for the valid Triangle.
       if((a+b)>c){
        cout<< "yes valid triangle";
       }
       else
       cout<< "not a valid triangle";

}
 // the sum of any two sides must be greater than the third side
