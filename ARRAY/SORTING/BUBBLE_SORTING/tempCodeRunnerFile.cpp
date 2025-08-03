
#include<iostream>
using namespace std;
// void selection_sort(int arr[],int size){
// for(int i=0;i<size-1;i++){
//   int min_index=i;
//   for(int j=i+1;j<size;j++){
//     if(arr[j]<arr[min_index]){
//       min_index=j;
//     }
//   }
//   if(arr[min_index]!=i){
//     swap(arr[i],arr[min_index]);
//   }
// }
// }
// void print_sel_sort(int arr[],int size){
// for(int i=0;i<size;i++){
//   cout<<arr[i]<<" ";
// }
// }
int main(){
  int arr[7]={ 5,3,7,2,8,9,4};
  int size=7;
  // selection_sort(arr,size);
  // print_sel_sort(arr,size);
   bubble_sort(arr,size);
  print_bub_sort(arr,size);
}


void bubble_sort(int arr[],int size){
for(int i=0;i<size-1;i++){
  for(int j=0;j<size-i-1;j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
  }
}
}
void print_bub_sort(int arr[],int size){
  for(int i=0;i<size;i++){
  cout<<arr[i]<<" ";
}
}