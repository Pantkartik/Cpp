#include<iostream>
using namespace std; 
int search_binary(int arr[],int size ,int key){
    int start=0,end=size-1;
    int mid= (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        } 
        
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            start=mid-1;
        }
        mid=(start+end)/2;
    }    return -1;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int size= 6;
    int search = search_binary(arr,size,6);
    cout<<"Element is found at "<<search<<endl;
}