#include<iostream>
using namespace std;
#include <vector> 
int main(){
vector<int>v;

v.push_back(10); // last main element add karleta hain array ke
v.push_back(30);
v.push_back(20);

cout<< "size is given as :"<<v.size()<<endl;
v.pop_back();
cout<<"size is given after as :"<<v.size()<<endl;

v.push_back(99); // adds 99 to vector array 

cout<<"front element is given by :"<<v.front()<<endl;
cout<<"last element is printed by as folows :"<<v.back()<<endl;
cout<<"element at any index is given as :"<<v.at(1)<<endl;

}
// size se jyda daala to garbage vlaue 0 print karke dedega
 
