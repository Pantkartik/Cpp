#include<iostream>
using namespace std;
int check(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%2==0) {
        cout<<"EVEN"<<endl;
        return 1;
    }
        else{
            
        cout<<"ODD"<<endl;
        return 0;
        }
}
}
    int main(){
        int checking=check();
        cout<<checking;
    }