//  given a array where there is the section divided to paint 
// there are k numeber of painter and we have to distribute the 
// partition such that they get the minimum of the part to paint 


/*  Logic 


   1.. Find the sample size to start =0 and end is the sum total of     the array .

   2. now find the mid and compare it with the arrangement of the painter section if the arragement is less than the the mid than end=mid-1 ans ans=mid saving the value if not than the start=mid+1  and this keeps on going on till the start =end .
   
   
*/


#include<iostream>
using namespace std ; 


int ran(int arr[],int size,int k){

  int sum=0;
  for(int i=0;i<=size;i++){
    sum+=arr[i];
  }

  int start=0,end=sum;
  int mid= start+(end-start)/2;
  while(start<=end){
    if(mid=end){
      int ans = mid;
      end=mid-1;
    }
    else{
      start=mid+1;
    }
  }
}
bool ispossible(int arr[],int size,int k){

}

int main(){
  int arr[5]={5,5,5,5,5};
  int size=6;

}