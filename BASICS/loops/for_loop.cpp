// to print the sum of number from 1 to n 
/*
    LOGIC 
    sum initialized to zero 
    sum =0;
    when i increase it will get added in the previous sum and 
    value of sum new is saved which then get added to new i 

    i=1;
    sum=sum+i;
    here i=1 and sum =0;
    sum=0+1=1;


    i=2
    sum=1;
    sum=1+2=3;

    i=3
    sum=3;
    sum=3+3=6;
    ...................................n times

        for(i=1;i<=n;i++){
        sum+=i;
        }
        cout<<sum<<endl;
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,sum=0,n;
//     cout<<"Enter the n : ";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum<<endl;
// }



// fibonacci series 
/*

    0,1,1,3,5,8,13,21.......n

    let a=0, b=1 so next number is sum of a b c=a+b
    now a=b b=c
    declaring the value of a to b and than b to c which is sum of a+b
*/

// #include<iostream>
// using namespace std; 
// int main(){
//     int i=1,n,a=0,b=1,c=0;
//     cout<<"Enter the n : "<<endl;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         c=a+b;
//         cout<<a;
//         a=b;
//         b=c;
//     }
//     cout<< c <<endl;
// }



//  to check whetehr the entered number is prime or not 
// prime numbers are divided by themseleves and by 1 
#include<iostream>
using namespace std;
int main(){
    int i,n;
    bool isprime=true;
    cout<<"Enter the number n : ";
    cin>>n;
    if(n<=1){
        isprime=false;
    }else{
        for(i=2;i<=n/2;++i){
            if(n%i==0){
                isprime=false;
                break;
            }
        }
    }
    if(isprime){
        cout<<"Prime";
    }else{
        cout<<"Not Prime"<<endl;
    }
}