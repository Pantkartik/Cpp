//  F.I.F.O   =====>   FIRST IN FIRST OUT 

#include<iostream>
#include<queue>
using namespace std ;

int main(){

queue<int>q;

// jo pehle dalenge woh pehle niklega 
q.push(10);
q.push(20);
q.push(30);



cout<<"Top of queue is the element which is comes first : "<<q.front()<<endl;  
// this will give the 10 

q.pop();
cout<<"Second to the top or front back : "<<q.front()<<endl;  
// this will give 20
}