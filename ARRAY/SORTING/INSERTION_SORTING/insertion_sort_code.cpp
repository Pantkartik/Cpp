// //  Insertion sort

// #include<iostream>
// using namespace std;
// void insertion_sort(int arr[],int size){
//   for(int i=1;i<size-1;i++){
//   int temp = arr[i];
//   for(int j=i+1;j<=0;j--){
//     if(arr[j]>temp){
//       arr[j+1]=arr[j];
//     }
//     else {
//       break;
//     }
//     arr[j+1]=temp;
//   }
// }

// }
// void print_array(int arr[],int size){
//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
// }
// int main(){
//   int arr[6]={6,5,4,3,2,1};
//   int size=6;
//   insertion_sort(arr,size);
//   print_array(arr,size);
// }



//  doing by myself
#include<iostream>
using namespace std ;
void insertion_sort(int arr[],int size){
   for(int i=1;i<size-1;i++){
    int temp = arr[i];
    for(int j=i+1;j>=0;j--){
      if(arr[j]>temp){
        arr[j+1]=arr[j];
      }
      else{
        break;
      }
      arr[j+1]=temp;
    }
   }
}

void print_sorted_array(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}


int main(){
  int arr[10]={10,9,8,7,6,5,4,3,2,1};
  int size = 10;
  insertion_sort(arr,size);
  print_sorted_array(arr,size);
}