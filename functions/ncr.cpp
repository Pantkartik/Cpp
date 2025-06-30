/* 
ncr factorial we have formula 

fact(n)/fact(r)*fact(n-r)

*/
#include<iostream>
using namespace std;
int fact(int n){
    int i=1,fact=1;
    for(i;i<=n;i++){
        fact=fact*i;
    }return fact;
}                   // this make factorial ready 
// now finding the ncr
int ncr(int n,int r){
    int ans = fact(n)/(fact(r)*fact(n-r));
    
}
int main(){
    int n,r;
    cin>>n>>r;
    int answer=ncr(n,r);
    cout<<answer;
}