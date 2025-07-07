#include<iostream>
using namespace std;

int printarr(int arr[],int size){
    cout<<"printing array\n";
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<'\n';     
    cout<<"printing done\n";
}
int main(){
    // // lets initialize  a array whole with 1
    // int arr[10]={0};
    // int n=10;
    // // int i;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]+1;
    // }
    int first[10]={2,3};
printarr(first,10);

}