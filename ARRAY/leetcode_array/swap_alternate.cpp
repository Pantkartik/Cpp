//  to swap a number alternate 
// #include<iostream>
// using namespace std;
// int altswap(int arr[],int n){
    
//         for(int i=0;i<n;i++){
//             swap(arr[i],arr[i+1]);
//             // swap(arr[i+2],arr[i+2]);
//             i++;
//         }
// }
// void print(int arr[],int n){
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[8]={5,2,9,4,7,6,1,0};
//     int n=8;
//     altswap(arr,n);

//     cout<<"Swapped array : ";
//     print(arr,n);
// }

//  to swap alternative number of an array 
#include<iostream>
using namespace std ;
int swap_alt(int arr[],int n){
    for(int i=0;i<n;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
void print_swp(int arr[],int n){
     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    swap_alt(arr,n);

    cout<<"swapped array : ";
    print_swp(arr,n);
}