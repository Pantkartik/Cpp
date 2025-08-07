//    Map is a data structure in which data is stored in key value pair 

#include<iostream>
#include<map>
using namespace std ;
int main(){
  map<int,string>m;
  m[1]="kartik";
  m[2]="pant";
  m[3]="is a";
  m[4]="programmer";

m.insert({5,"hero"});
  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
  }

  
}