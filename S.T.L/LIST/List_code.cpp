#include<iostream>
#include<list>
using namespace std;
int main(){
  list<int>L;
  L.push_front(5);
  L.push_back(10);
  for(int i:L){
 cout<<i<<" ";

  }
L.erase(L.begin(),L.end());
for(int i:L){
  cout<<"Deleted";
  cout<<i<<endl;
}
}