// //  to reverse a string 


// //  logic traversing form the last chaacter to the index 0 and than simulatenously printing the string 


// // two pointer approach 

// #include<iostream>

// using namespace std;
  
// void reverse_str(char str[],int n){
//   // two pointer approach 
//   int s=0,e=n-1;
//   while(s<e){
//     swap(str[s++],str[e--]);
//   }
// }

// int strlen(char str[]){
//   int count=0;
//   for(int i=0;str[i]!='\0';i++){
//     count++;
//   } return count;
// }
// int main(){
//   char str[]="kartik";
//   int n= strlen(str);

//   //  to print the reversed string 
//  reverse_str(str,n);
//   cout<<"Reversed string : "<<str;


  
// }




// reversing a string  
#include<iostream>
using namespace std ;
void reverse(char str[],int n ){
  int s=0,e=n-1;   
  while(s<e){
        swap(str[s++],str[e--]);
      }
}

int length(char str[]){
  int count=0;
  for(int i=0;str[i]!='\0';i++){
    count++;

}return count;
}
int main(){
  char str[100];
  cout<<"Enter the string : "<<endl;
  cin>>str;
  int n= length(str);
  reverse(str,n);
  cout<<str;

}