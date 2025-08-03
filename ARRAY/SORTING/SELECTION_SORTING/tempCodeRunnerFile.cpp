swap with the index of 1 ...... this goes on till size 



#include<iostream>
using namespace std ; 

void selection_sort(int arr[],int size){

for(int i=0;i<size-1;i++){
  int min_idx=i;
  for(int j=i+1;j<size;j++){
    if(arr[min_idx]>arr[j]){
      min_idx=j;
    }
    if(min_idx!=i){
      swap(arr[i],arr[min_idx]);
    }
  }
}

}

void print_arr(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<< "array : "<<arr[i]<<endl;
  }

}

int main(){
  int arr[5]={64,25,12,22,11};
  int size=5;
  cout<<print_arr<<endl;
}