// linear search means indexwise sewing down the value to match the key
#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    
    int arr[10]={2,4,23,80,42,44,12,90,33,56};
    int n=10,key;
    
    cout<<"Enter the element to search : ";
    cin>>key;
    int found=search(arr,n,key);
    if(found=key){
        cout<<"Element found  "<<endl;

    }
    else{
        cout<<"Element not found "<<endl;
    }
}