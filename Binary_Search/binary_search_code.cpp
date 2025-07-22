// //  lets code the binary search in a monotonous array 


//  #include<iostream>
//  using namespace std;
//  int binary_search(int arr[],int size,int key ){
//     int start=0,end= size-1;
//      int mid= (start+end)/2;
//      while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;

//         }
//         mid=(start+end)/2;
//     }
// return -1;
     
// }
// int main(){
//     int key ; 
//     // cout<<"Enter the key : ";
//     // cin>>key;
//     int arr[6]={2,4,6,84,86,89};
//     int size=6;
//     int index=binary_search(arr,size,6);
//   cout<<" Element found at : "<<index<<endl;
// }

























#include<iostream>
using namespace std; 
int search_binary(int arr[],int size ,int key){
    int start=0,end=size-1;
    int mid= (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        } 
        
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }    return -1;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int size= 6;
    int search = search_binary(arr,size,6);
    cout<<"Element is found at "<<search<<endl;
}




////   this is the correct code 


// #include<iostream>
// using namespace std;
// int search_binary(int arr[],int size,int key){
//     int start=0,end=size-1;
//     // int mid=(start+end)/2;      // this doesnot comes in the integer value spectrum 
//     int mid = start + ((end-start)/2);
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             start=mid-1;
//         }
//      mid = start + ((end-start)/2);
        
//     }
//     return -1;
// }
//  int main(){
//     int arr[6]={1,3,5,7,9,10};
//     int size =6;
//     int index=search_binary(arr,size,7);
//     cout<<" Elements is found at "<<index<<endl;
//  }




//  again solving 


// we have to binary search the element in the array 
//  start=0,end=size-1;
// the concept is that finding the mid of array by   mid=start+(end-start)/2  
// while(start>=end)
//  if arr[mid] == key than return the mid 
// if(key>arr[mid])  start=mid+1 ;
// else end=mid-1; 


#include<iostream>
using namespace std ;
int search_binary(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    } return -1;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    int index=search_binary(arr,size,key);
    cout<<index;
}