// switch case is a easy method '
// for alternative if else 
/*
syntax
int n=2;
switch(n)
{
 case 1( 1 ): ///
 case 2( 2 ): ///

}

*/


/*
     calculator making using the cpp

*/
#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cout<<"Enter the number a : ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;
    cout<<endl;
    cout<<"Choose the operation: ";
    cout<<
    " + ---> 1"<<endl;
    cout<<
    " - ---> 2"<<endl;
    cout<<
    " * ---> 3"<<endl;
    cout<<
    " / ---> 4"<<endl;
    cin>>n;
    
    switch( n ){
        case 1 : 
        cout<<"You choose + ";
        cout<<"a+b : "<<a+b<<endl;
        cout<<"Nikal"<<endl;
        break;
    
        case 2 : 
        cout<<"You choose - ";
        cout<<"a+b : "<<a-b<<endl;
        cout<<"Nikal"<<endl;
 break;
         case 3 : 
        cout<<"You choose * ";
        cout<<"a+b : "<<a*b<<endl;
        cout<<"Nikal"<<endl;
        break;
    
        case 4 : 
        cout<<"You choose / ";
        cout<<"a+b : "<<a/b<<endl;
        cout<<"Nikal"<<endl;

        break;

        default:
        cout<<"Invalid";
        
    }
}