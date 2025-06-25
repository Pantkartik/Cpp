// // while loop
// #include<iostream>
// using namespace std;
// int main(){
//     // to print all number from 1 to n using while loop
//     // finding sum from 1 t on 
//     int i=1,n,sum=0;
//     cout<<"Enter the n : " <<endl;
//     cin>>n;
//     while(i<=n){
//         cout<<i<<endl;
//         sum=sum+i;
//         i=i+1;
//     }
//     cout<<sum<<endl;
// }

// to find sum of all even number b/w 1 to n
// #include<iostream>
// using namespace std;
// int main(){
// int n,i=1,sum=0;
// cout<<"Enter the number n : ";
// cin>>n;
// while(i<=n){
//     if(i%2==0){
//         sum=sum+i;
//     }
//     i=i+1;
    
// }
// cout<<sum<<endl;
// }

// to print whether the number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    int i=2;
    cout<<"Enter the number n: ";
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"Not Prime\t"<<i<<endl;
        }
        else{
            cout<<"Prime\t"<<i<<endl;
        }
        i+=1;
    }
}