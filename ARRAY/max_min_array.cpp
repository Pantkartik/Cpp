// to find the maximum and minimum element in an array
// let us take an array 
// int arr[10]={4,2,8,10};
// #include<iostream>
// using namespace std;
// int max_min(int arr[],int size){
//     int i;
//     for(i=0;i<=size;i++){
//         if(arr[i+1]>arr[i]){
//             cout<<"max : "<<arr[i+1];
//             break;
//         }
        
//     }
// }
// int main(){
//     int arr1[5]={4,2,10,11};
//     max_min(arr1,5);
// }



// sorting method 
// #include<iostream>
// using namespace std;
// int sort(int arr[],int n){
//     int i,j,temp=0;
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         cout<< arr[i]<<endl;
//     }
//     cout<<"Maximum : "<<arr[3]<<endl;
//     cout<<"Minimum : "<<arr[0];
// }
// int main(){

//     int arr[4]={4,2,10,11};
//     sort(arr,4);
// }


// max min 
#include<iostream>
#include<climits>
using namespace std;
int getmax(int arr[],int n){
   int max= INT_MIN ;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            cout<<max;
        }
}
int getmin(int arr[],int n){
int min= INT_MAX ;
    for(int i=0;i<n;i++){
            if(arr[i]>min){
            min=arr[i];
            }
            cout<<min;
        }
}
int main(){
    int i,n;
    int arr[10];
    for(i=0;i<n;i++){
        cout<<"Enter the elements of array : ";
        cin>>arr[i];
    }
cout<<"Maximum : "<<getmax(arr,n)<<endl;
cout<<"Minimum : "<<getmin(arr,n)<<endl;
}