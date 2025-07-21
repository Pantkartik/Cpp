// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. 'arr' may contain duplicate elements.
// Example:
// Input: 'arr' = [0,1,1,5] , 'k' = 1
// Output: 1 2
// Explanation:
// If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.

#include<iostream>
using namespace std;
int occurence(int arr[],int size,int k){
    int start=0,end=size-1;
    int mid= start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        if(k>arr[mid]){
            start=mid+1;
            if(arr[mid]==k){
                return mid;
            }
        }
        else{
            end=mid-1;
            if(arr[mid]==k){
                return mid;
            }
        }
    }
}

int main(){
    int arr[6]={1,2,3,4,6,6};
    int size=6;
    int check_occurence=occurence(arr,6,6);
    cout<<check_occurence<<endl;
}