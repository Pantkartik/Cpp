// to add the elements of the array 
#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=arr[i]+sum;
    }
    cout<<" sum : "<<sum<<endl;
}
int main(){
    int n;
    int arr[5];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements of array : ";
        cin>>arr[i];
    }
    sum(arr,5);
}