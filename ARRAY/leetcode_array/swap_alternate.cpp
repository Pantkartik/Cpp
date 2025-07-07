//  to swap a number alternate 
#include<iostream>
using namespace std;
int altswap(int arr[],int n){
    
        for(int i=0;i<n;i++){
            swap(arr[i],arr[i+1]);
            // swap(arr[i+2],arr[i+2]);
            i++;
        }
}
void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[8]={5,2,9,4,7,6,1,0};
    int n=8;
    altswap(arr,n);

    cout<<"Swapped array : ";
    print(arr,n);
}