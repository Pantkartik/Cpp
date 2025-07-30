//  Pivot point fiding

// #include<iostream>
// using namespace std ;
// int pivot(int arr[],int size ){
// int s=0,e=size-1,mid=s+(e-s)/2;
// while(s<e){
//   if(arr[mid]>=arr[0]){
//     s=mid+1;

//   }
//   else {
//     e=mid;
//   } mid=s+(e-s)/2;
// }return s;
// }
// int main(){
//   int arr[6]={3,8,10,17,1};
//   int size=6;
//   int pivot_num=pivot(arr,size);
//   cout<<"The pivot point is  : "<<pivot_num;
// }



// to check whether the array have the pivot point 


#include<iostream>
using namespace std ; 
int pivot(int arr[],int size){
  // logic is is finding mid comparing mid with the arr[0] if arr[mid]>arr[0]  start=mid+1 
  //  else end  =  mid  and update the value of mid return start
  int start=0,end=size-1;
  int mid = (start+end)/2;
  while(start<end){
    if(arr[mid]>arr[0]){
      start=mid+1;
    }
    else {
      end=mid;
    }
    mid = (start+end)/2;
  }
return start;
}

int main(){
  int arr[6]={3,8,10,17,1};
  int size=6;
  int pivot_check=pivot(arr,size);
  cout<<"Pivot point is at index : "<<pivot_check<<endl;
}