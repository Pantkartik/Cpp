
#include<iostream>
using namespace std;

int main(){
  int arr[6]={5,2,6,27,3,9};
  int size=6;
  int temp=0;
  for(int i=0;i<size;i++){
    if(arr[i]>arr[i+1]){
        arr[i]=temp;
        temp=arr[i+1];
    }
  }
  // printing the array sorted 


  for(int i=0;i<size;i++){
    cout<<arr[i];
  }
}