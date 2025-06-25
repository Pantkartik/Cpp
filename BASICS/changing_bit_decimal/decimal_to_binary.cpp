// to change decimal to bit
/*
    logic 
    1. if we n&1 and condition while(n!=0) we will get last bit
    2. than shifting the next bit to right n=n>>1 
    3. reversing the bit ans=(bit*10**i)+ans
    4. cout<<ans

*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i=0,ans=0,digit,n;
    cout<<"Enter the number n  : ";
    cin>>n;
    while(n!=0){
        digit=(n&1);
        ans=(digit*pow(10,i))+ans;
        n=n>>1;
        i+=1;

    }
    cout<<ans;
    cout<<endl;
}