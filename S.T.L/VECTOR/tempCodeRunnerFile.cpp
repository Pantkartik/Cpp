// a vector is a dynamic array 


/*  when we over capaccity it it double the capacity and dump the old one */

#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>v;
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

}




//  when we add element and size is less than the size of the vector is doubled 


#include<iostream>
#include<vector>
using namespace std;
int main(){

vector <int >v;
cout<<"capacity before adding the element : "<<v.capacity()<<endl;


v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(200);
v.push_back(100);

// here 3 element is added and the capacity will be 6
cout<<"Capacity after adding the element : "<<v.capacity()<<endl;


cout<<"size : "<<v.size();

}