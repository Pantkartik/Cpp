//  to check the palindrome of the string 

/*  logic is that palindrome is the string which has a reversed equal to the original string */

#include<iostream>
using namespace std ;
void  reverse(char str[],int n){
  int start=0,end=n-1;
  while(start<end)
  swap(str[start++],str[end--]);
} 
int length_str(char str[]){
  int count=0;
  for(int i=0;str[i]!='\0';i++){
    count++;
  }return count;
}

int main(){
  char str[20];
  cout<<"Enter the string : "<<endl;
  cin>>str;
  int n=length_str(str);
  // to check whetehr its palindrome or not 
  char str_new=reverse(str,n);
  cout<<str;
  if(str==str_new){
    cout<<"Palindrome ";
  }
  else cout<<"Not palindrome ";
 
}