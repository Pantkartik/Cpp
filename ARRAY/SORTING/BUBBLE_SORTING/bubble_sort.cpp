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




