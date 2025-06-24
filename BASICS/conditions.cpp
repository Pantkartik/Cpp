// #include<iostream>
// using namespace std;
// int main(){
//     // to check if the number is odd or even or ze4ro 
//     int number;
//      cout<<"Enter the number: "<<endl;
//      cin>>number;
//      if(number%2==0){
//         cout<<" Number is even "<<endl;

//      }
//      else{
//         cout<<"Number is odd"<<endl;
//      }
// }

// find the character entered is lowercase or uppercase
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<(int)ch<<endl;
        cout<<"Lowercase"<<endl;
    }
    else if(ch>=65 && ch<=90){
        cout<<"Uppercase"<<endl;
    }
    else{
        cout<<"Character is invalid"<<endl;
    }

}