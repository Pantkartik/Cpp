//  Pivot point fiding

#include<iostream>
using namespace std ;
int pivot(int arr[],int size ){
int s=0,e=size-1,mid=s+(e-s)/2;
while(s<e){
  if(arr[mid]>=arr[0]){
    s=mid+1;

  }
  else {
    e=mid;
  } mid=s+(e-s)/2;
}return s;
}
int main(){
  int arr[6]={3,8,10,17,1};
  int size=6;
  int pivot_num=pivot(arr,size);
  cout<<"The pivot point is  : "<<pivot_num;
}