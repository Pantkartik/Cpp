#include<iostream>
// #include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){

  //  Max heap priority queue
  priority_queue<int> maximum_heap;
  
  maximum_heap.push(10);
  maximum_heap.push(20);
  maximum_heap.push(30);
  
  // minimum heap priority queue

  priority_queue<int,vector<int>,greater<int>>minimum_heap;
  minimum_heap.push(10);
  minimum_heap.push(0);
  minimum_heap.push(4);
  minimum_heap.push(9);
  

  // cout<<"Maximum element in priority queue : "<<maximum_heap.top()<<endl;

  // //  removing the element at the start
  
  // maximum_heap.pop();

  // cout<<"Maximum element in priority queue : "<<maximum_heap.top()<<endl;  // this will give 20 




  /*   To print the elements in a priority queue using for loop */

  int size_maxi=maximum_heap.size();
  for(int i=0;i<size_maxi;i++){
          cout<<maximum_heap.top()<<" ";   
          // this will give the top element 
          maximum_heap.pop();
          
  }
 cout<<endl;


  int size_mini=minimum_heap.size();
  for(int i=0;i<size_mini;i++){
    cout<<minimum_heap.top()<<" ";
    minimum_heap.pop();
  }

}