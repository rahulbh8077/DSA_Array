#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for(auto i: v){
    v.push_back(i);
    cout<<i<<" ";
}
vector<int> as;
as.push_back(10);
for(auto d: as){
cout<<d<<" ";
}
vector<int> v1(5,20);
cout<< "before pushback of an element"<<" ";
for(auto q: v1){
    cout<< q<<" ";
}
v1.push_back(1000);
 return 0;
}
