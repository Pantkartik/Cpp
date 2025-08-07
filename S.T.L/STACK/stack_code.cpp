//  stack is the sequential arrangement of elements 
//  first in first out 


// jo last me ayega woh pehle jaega 

//  L.I.F.O   ======> last in first out 

#include<iostream>
#include<stack>
using namespace std;

int main(){

  stack<int> s;
  s.push(5);
  s.push(10);
  s.push(15);
  


  cout<<"top element is the last element entered : "<<s.top()<<endl;

  // now removing the top element and obtaining the second top 
  s.pop();
  cout<<"newly top : "<<s.top()<<endl;


  //  to determine the size of the stack # here we have removed the topmost 15 so size is 2 only 
  cout<<"size : "<<s.size()<<endl;
}




//  in stack its a logic of lifo   last in first out 

#include<iostream>
#include<stack>
using namespace std;
int main(){

  stack<int>s;

  s.push(10);   // 10 is first so it will be last output 
  s.push(20);
  s.push(30);
  s.push(40);   // 40 is the last thus it will be first lifo 



  cout<<"size of stack : "<<s.size()<<endl;


  // stack<int>iterator it=size();
  // for(int i =0;i<it;i++){

  // }

  cout<<" Top element is : "<<s.top()<<endl;
  s.pop();
  cout<<" second top : "<<s.top()<<endl;


 
}