#include<iostream>
using namespace std;
void factorial (int n ){
    if(n<0){
        cout<< "enter a valid no"<<endl;
    }
    else if((n==0) || (n==1)){
        cout<<1<<endl;
    }
    int fact=1;
    for(int i=1;i<=n;i++){
         fact=fact*i;
         
    }
    cout<< fact;
   
} // factorial ka logic to tagda tha bhai 
// favtoriall ki value kese update karni hai try to focus on that thing prior;
int main(){
    int n;
cout<< "ENTER THE NO TO CHECK THE FACTORIAL"<<endl;
cin>> n;
factorial(n);
}
    
