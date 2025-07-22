#include<iostream>
using namespace std;

int first_occurence(int arr[],int size,int key){
int start=0,end=size-1;
int ans=-1;
int mid= start+(end-start)/2;
while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        end=mid-1;
    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    else if(key<arr[mid]){
        end=mid-1;
    }
    mid= start+(end-start)/2;
} return ans;
}
int last_occurence(int arr[],int size,int key){

}
int main(){
int arr[6]={1,2,4,5,6,6};  // here there are 2 occurence of 6 1st at 4 and last at 5
int size =6;
int key;
cout<<"Enter the key : ";
cin>>key;
int first=first_occurence(arr,size,key);
int last =last_occurence(arr,size,key);
cout<<"First occurence : "<<first<<endl;
cout<<"Last occurence : "<<last<<endl;
}