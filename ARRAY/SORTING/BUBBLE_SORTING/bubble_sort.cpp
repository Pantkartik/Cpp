// BUBBLE SORTING


/*                  LOGIC                          */
/*
  

``````` 1. round 1 : we check the arr[i] with the arr[i+1]   if arr[i]> arr[i+1]   ....>>>>>>>>> swap(arr[i],arr[i+1]);
                      if( arr[i+1]>arr[i])   ignore / continue and move to next   
                      .....> this is till the 1 largest element is at the last arr[size];
         2. round 2 : we check the arr[i] with the arr[i+1   same as above till the arr[size -1]

......  round = n-1 ( size -1 )
*/


// #include<iostream>
// using namespace std;
// void print(int arr[],int size){
//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
// }
// void bubble_sort(int arr[],int size){
//   for(int i=0;i<size-1;i++){
   
//     for(int j=0;j<size-1;j++){
//       if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);
//         // start=arr[i+1];
//       }
//     }
//   }
  
// }
// int main(){
//   int arr[6]={3,1,56,2,8,4};
//   int size=6;
//   bubble_sort(arr,size);
//   print(arr,size);

//   return 0;
// }




//  trying bubble sort , selection sort on my own 

//  selection sort 


#include<iostream>
using namespace std;
void selection_sort(int arr[],int size){
for(int i=0;i<size-1;i++){
  int min_index=i;
  for(int j=i+1;j<size;j++){
    if(arr[j]<arr[min_index]){
      min_index=j;
    }
  }
  if(arr[min_index]!=i){
    swap(arr[i],arr[min_index]);
  }
}
}
void print_sel_sort(int arr[],int size){
for(int i=0;i<size;i++){
  cout<<arr[i]<<" ";
}
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
int main(){
  int arr[7]={ 5,3,7,2,8,9,4};
  int size=7;
  selection_sort(arr,size);
  print_sel_sort(arr,size);
  cout<<endl;
   bubble_sort(arr,size);
  print_bub_sort(arr,size);
}
