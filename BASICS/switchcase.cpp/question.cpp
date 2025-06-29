// given 1330 rupees find how much the corresponding notes 
// will be required 

// of 100,50,20,1
#include<iostream>
using namespace std;
int main(){
    int money,n;
    cout<<"Enter the amount of money : ";
    cin>>money;
    cout<<"Enter the note : ";
    cin>>n;
   
    switch(n){
        case 100:
        cout<<" Note given : "<<money/100<<endl;
        break;

        case 50:
        cout<<" Note given : "<<money/50<<endl;
        break;

         
        case 20:
        cout<<" Note given : "<<money/20<<endl;
        break;

        
        case 1:
        cout<<" Note given : "<<money/1<<endl;
        break;
    
    }
}