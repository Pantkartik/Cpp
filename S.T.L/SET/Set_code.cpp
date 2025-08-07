// SET 

//  A set is a data structure which stores data in  a unique way no repretition of of elements '
// return the sorted data 


// unordered set return unsorted data 


#include<iostream>
#include<set>
using namespace std;


int main(){
  //  to print the set we have to take the input of the set data using the insert method 

  set<int> s;
  s.insert(10);
  s.insert(10);

  s.insert(12);
  s.insert(12);
  s.insert(12);

  s.insert(1);
  s.insert(3);
  s.insert(0);
  s.insert(2);

  for(auto i:s){
    cout<<i<<" ";
  }
cout<<"\n";

  // for( int i : s ){
  //   cout<<i<<" ";


// }
 set<int>::iterator it=s.begin();
 it++;
s.erase(it);    // s.begin()+2  ====> next +2 element is deleted 
  
  for( int i : s ){
    cout<<i<<" ";


  }



  //   to check whether the element is present or not
cout<<"present or not : "<<s.count(3)<<endl;
}