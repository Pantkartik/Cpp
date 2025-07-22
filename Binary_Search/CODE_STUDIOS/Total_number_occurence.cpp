//  to find the total number of occurence in an array we have to 
//  find last occurence ,first occurence 

// Total occurence = (last occurence - first occurence)+1;



#include<iostream>
using namespace std;
int first_occurence(int arr[],int size,int key){
    int start=0,end=size-1;
    int ans=-1;
 int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;  // to shift to left for checking the mid 
        }
        else if(key>arr[mid]){
            start=mid+1;   // to shift to right for further checking 
        }
        else if(key<arr[mid]){
            end=mid-1;    // if key less than mid its obvious to shift the left 
        }
        mid= start+(end-start)/2;  // updation of the mid after every iteration
    }
    return ans ;
}
int last_occurence(int arr[],int size,int key){
  int start=0,end=size-1;
    int ans=-1;
 int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;  // to shift to right for checking the more occurence 
        }
        else if(key>arr[mid]){
            start=mid+1;   // to shift to right for further checking 
        }
        else if(key<arr[mid]){
            end=mid-1;    // if key less than mid its obvious to shift the left 
        }
        mid= start+(end-start)/2;  // updation of the mid after every iteration
    }
    return ans ;
}
int main(){
    int arr[6]={1,2,3,5,5,5};   // 5 occured 3 times 
    int size =6;
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    // last_occurence(arr,size,key);
    int total_occurence= (last_occurence(arr,size,key) - first_occurence(arr,size,key)) +1;
    cout<<"Total occurence is : "<<total_occurence<<endl;
}