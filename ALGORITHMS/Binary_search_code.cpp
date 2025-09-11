//  binary search using binary search 


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;
int main(){


  vector<int> v;
  

  // inserting  the values in the vector 

  v.push_back(1);
  v.push_back(4);
  v.push_back(10);
  v.push_back(15);
  v.push_back(90);


  //   to find the number using binary search stl 
  cout<<" Binary_search : element found ===> "<<binary_search(v.begin(),v.end(),90)<<endl;   


  //  this will find the number is present or not 

  /*   Lowwer bound : */

  cout<<" Lowwer Bound ===> "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;


  /*   Upper bound : */

  cout<<" Upper Bound ===> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;





  // we can also print the max and min of two numbers
  int a=10;
  int b=20;
  
  cout<<"Max : "<<max(a,b) <<"\n";
  

  cout<<"Min : "<<min(a,b);

  cout<<endl;


  // we can swap the a and b values

  cout<<" a before swapping : "<<a<<endl;
  cout<<" b before swapping : "<<b<<endl;


  swap(a,b);
  cout<<" a after swapping : "<<a<<endl;
  cout<<" b after swapping : "<<b<<endl;


  ///     reversing a string 

string abcd="kartik";
reverse(abcd.begin(),abcd.end());
cout<<"abcd : "<<abcd;

// rotating a vector 

rotate(v.begin(),v.begin()+2,v.end());

for( auto i:v){

  cout<<"Vector : "<<i<<" "<<endl;
}




//  sorting the vector 
// uses intro sort 
//  intro sort is a combination of three sorting methods 

//    1. heap sort
//    2. insertion sort
//    3. quick sort

sort(v.begin(),v.end());
for(auto i : v){
  cout<<i<<" "<<endl;
}
}

