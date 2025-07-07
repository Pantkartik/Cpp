// //  to solve the max min elements in an array on of the easiest is using 
// // predefined functions 
// // max , min
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int getmax(int arr[],int n){
//     int maxi=arr[0];
//     for(int i=0;i<n;i++){
//          maxi=max(maxi,arr[i]);
//     }
//         return maxi;

// }
// int getmin(int arr[],int n){
//         int mini=arr[0];
//     for(int i=0;i<n;i++){
//          mini=min(mini,arr[i]);
//     }
//         return mini;
// }
// int main(){
//     int arr[3];
//     int n=3;
//     for(int i=0;i<n;i++){
//         cout<<"Enter the elements of array : ";
//         cin>>arr[i];
//     }
//     cout<<"Maximum : "<<getmax(arr,3);
//     cout<<"Minimum : "<<getmin(arr,3);

// }













// trying myself
#include<iostream>
#include<algorithm>
using namespace std;
int getmax(int arr[],int n){
        int maxi=arr[0];
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        return maxi;
}
int getmin(int arr[],int n){
         int mini=arr[0];
        for(int i=0;i<n;i++){
            mini=min(mini,arr[i]);
        }
        return mini;
}
int main(){
    int arr[4]={2,4,5,11};
    int n=4;
    cout<<"MAXIMUM : "<<getmax(arr,n)<<endl;
    cout<<"MINIMUM : "<<getmin(arr,n)<<endl;

}