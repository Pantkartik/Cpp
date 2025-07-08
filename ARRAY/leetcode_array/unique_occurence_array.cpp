// // unique occurence array means that each element has unique no of times appeared
// #include<iostream>
// using namespace std;
// int unique_occ(int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr[i+1]){
//             count++;
//             return true;
//             i++;
//         }
//         else{
//             i++;
//         }
//     }
// }
// bool unique(int arr[],int n){
//     if(true){
//         cout<<"Unique"<<endl;
//     }
//     else{
//         cout<<"Not unique";
//     }
// }
// int main(){
//     int arr[6]={1,2,2,3,1,3};
//     int n=6;
//     unique_occ(arr,n);
//     unique(arr,n);
// }

    // 1207 
// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

// Example 1:

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
// Example 2:

// Input: arr = [1,2]
// Output: false
// Example 3:

// Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
// Output: true
 

// Constraints:

// 1 <= arr.length <= 1000
// -1000 <= arr[i] <= 1000


// logic is that if we xor the number/elements in array it cancel out the unique element and return the left 
#include<iostream>
using namespace std;
int main(){
    bool unique= 1;
    int arr[6]={1,1,2,2,3,3};
    int n=6;
    int check=0;
    for(int i=0;i<n;i++){
        check=check^arr[i];
    }
    if(check==0){
        cout<<"UNIQUE";
     return unique;
    }
    else cout<<"Not unique "<<check;

}