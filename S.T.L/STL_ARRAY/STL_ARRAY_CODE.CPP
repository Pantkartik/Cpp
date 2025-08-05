//  STL IN ARRAY USED AS BELOW 

#include<iostream>
#include<array>
using namespace std;

int main(){

  // normal array declaration 
  int arr[5]={1,2,3,45,6};
  
  // stl 
  array<int,4> a = {1,2,3,4};
  int size=a.size();
  for(int i=0;i<size;i++){
    cout<<a[i];
    cout<<endl;
  }
  cout<<a.front()<<endl;   // for finding the first element of array
  cout<<a.back()<<endl;  // to find last element
  cout<<a.empty()<<endl;  // to empty an array 
  

}
  

  