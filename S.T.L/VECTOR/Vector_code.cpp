// a vector is a dynamic array 


/*  when we over capaccity it it double the capacity and dump the old one */

#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>v;
  //  vector <int>(5,1)    // 5 is the size of the vector and 1 is the initializing 
  cout<<"capacity"<<v.capacity()<<endl;   // 0 
  
  // capacity is the total no of element it can hold its not equal to size


  //  now adding elements to the vector
  v.push_back(1);
  cout<<"capacity"<<v.capacity()<<endl;  // 1


  v.push_back(2);
  cout<<"capacity"<<v.capacity()<<endl;  // 2   DOUBLED THE CAPACITY FROM 1 TO 2 


   v.push_back(3);
  cout<<"capacity"<<v.capacity()<<endl;  // 4 DOUBLED THE CAPACITY FROM 2 TO 4 
  

  // BUT SIZE OF VECTOR IS THE ELEMENTS PRESENT THERE
  cout<<"Size : " <<v.size()<<endl;

  

  //  front , back 
  cout<<"Front : "<<v.front()<<endl;
  cout<<"Back : "<<v.back()<<endl;


  // pop back or remove the last element

  v.pop_back();
  for(int i=0;i<v.size();i++){

    cout<<"After Pop_back : "<<v[i]<<endl;
  }



  //  empty the vector
  v.clear();
  for(int i=0;i<v.size();i++){

    cout<<"Empty : "<<v[i]<<endl;
  }
}