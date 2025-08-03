// // in selection sorting we swap the previous with the next element till all the element are sorted properly 


// #include<iostream>
// using namespace std;

// int main(){
//   int arr[6]={5,2,6,27,3,9};
//   int size=6;
//   int temp=0;
//   for(int i=0;i<size;i++){
//     if(arr[i]>arr[i+1]){
//         arr[i]=temp;
//         temp=arr[i+1];
//     }
//   }
//   // printing the array sorted 


//   for(int i=0;i<size;i++){
//     cout<<arr[i];
//   }
// }



//  1. index 0 finding smalllest number in array index 1 to size found replace swap with the index of 0 than 
//  2. index 1 finding smallest number in array index 2 to size found replace swap with the index of 1 ...... this goes on till size 


#include<iostream>
using namespace std;
void selection_sort(int arr[],int size){
  for(int i=0;i<size-1;i++){
    int min_idx=i;
    for(int j=i+1;j<size;j++){
      if(arr[j]<arr[min_idx]){
        min_idx=j;
      }
    }
      if(min_idx!=i){
        swap(arr[i],arr[min_idx]);
      }
    } 
}
void print_arr(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[5]={64,5,8,12,11};
  int size=5;
  cout<<"Selection sorted array "<<endl;
  selection_sort(arr,size);
  print_arr(arr,size);
 return 0;
}