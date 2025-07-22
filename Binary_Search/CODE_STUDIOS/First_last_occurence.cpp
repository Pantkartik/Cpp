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

// #include<iostream>
// using namespace std;
// int occurence(int arr[],int size,int k){
//     int start=0,end=size-1;
//     int mid= start + (end-start)/2;
//     while(start<=end){
//         if(arr[mid]==k){
//             return mid;
//         }
//         if(k>arr[mid]){
//             start=mid+1;
//             if(arr[mid]==k){
//                 return mid;
//             }
//         }
//         else{
//             end=mid-1;
//             if(arr[mid]==k){
//                 return mid;
//             }
//         }
//     }
// }

// int main(){
//     int arr[6]={1,2,3,4,6,6};
//     int size=6;
//     int check_occurence=occurence(arr,6,6);
//     cout<<check_occurence<<endl;
// }



//  let's partialize the code into two parts 
//  first in finding the first occurence and storing the index if it match if not move to next iteration
//  and the second part is for the last or the right most occurence 
//  here we will push the start = mid+1 

// #include<iostream>
// using namespace std;

// int first_occurence(int arr[],int size,int key){
// int start=0,end=size-1;
// int ans=-1;
// int mid= start+(end-start)/2;
// while(start<=end){
//     if(arr[mid]==key){
//         ans=mid;
//         end=mid-1;
//     }
//     else if(key>arr[mid]){
//         start=mid+1;
//     }
//     else if(key<arr[mid]){
//         end=mid-1;
//     }
//     mid= start+(end-start)/2;
// } return ans;
// }


// int last_occurence(int arr[],int size,int key){

// // to find the last occurence the logic is like this 
// // after the first occurence we have to move to the right so that the last element of array can be found
// // replace end=mid-1 with start=mid+1 at first iteration
// int start=0,end=size-1;
// int ans=-1;
// int mid= start+(end-start)/2;
// while(start<=end){
//     if(arr[mid]==key){
//         ans=mid;
//         start=mid+1;
//     }
//      else if(key>arr[mid]){
//         start=mid+1;
//     }
//     else if(key<arr[mid]){
//         end=mid-1;
//     }
//     mid= start+(end-start)/2;
// } return ans;
// }
// int main(){
// int arr[6]={1,2,4,5,6,6};  // here there are 2 occurence of 6 1st at 4 and last at 5
// int size =6;
// int key;
// cout<<"Enter the key : ";
// cin>>key;
// int first=first_occurence(arr,size,key);
// int last =last_occurence(arr,size,key);
// cout<<"First occurence : "<<first<<endl;
// cout<<"Last occurence : "<<last<<endl;
// }



//  retrying again 
#include<iostream>
using namespace std;

// making function first and last occurence 

//  first occurence 
int first_occurence(int arr[],int size,int key){
 int start=0,end=size-1;
 int mid=start+(end-start)/2;
 int ans=-1;
 while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        end=mid-1;
    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    else if(key<arr[mid]){
            end=mid-1;
    }
 mid=start+(end-start)/2;

}
return ans;
}

int last_occurence(int arr[],int size,int key){
 int start=0,end=size-1;
 int mid=start+(end-start)/2;
 int ans=-1;
 while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        start=mid+1;
    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    else if(key<arr[mid]){
            end=mid-1;
    }
 mid=start+(end-start)/2;

}
return ans;
}
int main(){
    int arr[6]={1,3,4,5,6,6};
    int size=6;
    int key;
cout<<"Enter the key : ";
cin>>key;
int first=first_occurence(arr,size,key);
int last =last_occurence(arr,size,key);
cout<<"First occurence : "<<first<<endl;
cout<<"Last occurence : "<<last<<endl;
}



