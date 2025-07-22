#include<iostream>
using namespace std ;
int search_binary(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    } return -1;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    int index=search_binary(arr,size,key);
    cout<<index;
}