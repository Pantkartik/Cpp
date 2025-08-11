//  to find the length of string
#include<iostream>
using namespace std;
int main(){

int count=0;
char str[20]="kartik pant ";
// method 1 (traversing from 0 to the last element )
for(int i=0;str[i]!='\0';i++){
 
    count+=1;
  }

cout<<"Length of string : "<<count<<endl;

}