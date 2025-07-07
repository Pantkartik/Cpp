// 2nd method is using a int min max function   INT_MIN, INT_MAX 
// #include<iostream>
// #include<climits>
// using namespace std;
// int getmax(int arr[],int n){
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(maxi<arr[i]){
//             maxi=INT_MIN;
//         }
//     }
//     return maxi;
// }
// int getmin(int arr[],int n){
//     int mini=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(mini<arr[i]){
//             mini=INT_MIN;
//         }
//     }
//     return mini;
// }
// int main(){
//     int arr[4]={2,43,4,8};
//     int n=4;
//     cout<<"Maximum  : "<<getmax(arr,n)<<endl;
//     cout<<"Minimum  : "<<getmin(arr,n)<<endl;

// }


// 2nd method
#include<iostream>
#include<climits>
using namespace std;
int getmax(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            maxi=INT_MIN;
        }
    }
}
int getmin(int arr[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(mini<arr[i]){
            mini=INT_MAX;
        }
    }
}
int main(){
    
}