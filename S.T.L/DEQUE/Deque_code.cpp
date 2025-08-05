//  a deque is a dynamic array where there is insertion and deletion from both side of array 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


  //   lets declare a deque 
  deque<int > a ;


  // to add element from front and back 
  a.push_front(6);
  a.push_back(5);
  // for(int i=0;i<a.size();i++){
  //     cout<<" array "<<a[i]<<endl;
  // }


  for(int i:a){
    cout<<"array : "<<i<<endl;
  }

  // to pop element from last 
//   a.pop_back();
//   for(int i:a){
//     cout<<"pop back : "<<i<<endl;
//   }

// //  to pop element from front 
//   a.pop_front();
//   for(int i:a) cout<<i<<endl;


  //  accesing an element present at the first index
  cout<<"index 0 : "<<a.at(0)<<endl;


}