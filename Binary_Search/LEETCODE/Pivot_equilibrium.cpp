//  to find the pivot index


// #include<iostream>
// using namespace std ; 

// int main(){
//     int arr[6]={1,7,3,6,5,6};
//     // finding total sum 
//     int sum=0,size=6;
//     for(int i=0;i<size-1;i++){
//         sum=sum+arr[i];
//     }
//     cout<<sum;
// }


// #include<iostream>
// using namespace std ; 
// int total_sum(int arr[],int size){
//    int sum=0;
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//    }
// return sum;
// }
// int main(){
//     int arr[6]={1,7,3,6,5,6};
//     int size=6;
//     // lets compare the sum of right and left to find pivot point
//     int right_sum=total_sum(arr,size);
//     // right sum allocated total sum now traversing the sum left initially zero to the right and comparing
//     int left_sum=0;
//     for(int i=0;i<size;i++){
//         right_sum=right_sum-arr[i];    // for removing the first term sum 
//         if(left_sum==right_sum){
//             cout<<"pivot found at index  : "<<i;
        
//         }
//         left_sum=left_sum+arr[i];
//     }
// }




//  pivot point in array


//  note 

//  this is the equilibrium finding question not the pivot of rotation
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
            cout<<"Pivot point found at index  "<<i;
        }
        left_sum=left_sum+arr[i];
    }
}