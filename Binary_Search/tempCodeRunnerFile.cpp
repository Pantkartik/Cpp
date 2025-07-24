#include<iostream>
using namespace std; 
int total_sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[6]={1,7,3,6,5,6};
    int size=6;
    int right_sum=total_sum(arr,size);
    int left_sum=0;
    for(int i=0;i<size;i++){
        right_sum=right_sum-arr[i];
        if(left_sum==right_sum){
            cout<<"Pivot point found "<<i;
        }
        left_sum=left_sum+arr[i];
    }
}