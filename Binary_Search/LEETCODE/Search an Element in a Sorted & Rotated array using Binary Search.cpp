// Search an Element in a Sorted & Rotated array using Binary Search



//  approach is like this we have to first find the pivot point 
// than we have to rotated or shift the index of pivot to the index 0 and the pivot+1... to the index 1 
// than check for the entered k index in the rotated array 

#include<iostream>
using namespace std ; 
int pivot_point(int arr[],int size){
    int left_sum=0;
    int total_sum=0;
    int right_sum=0;
    // finding the right indices sum which will be equal to total sum -1 ==> right sum 
    for(int i=0;i<size;i++){
        
        total_sum += arr[i];

    }
    for(int i=0;i<size;i++){
        right_sum=total_sum-arr[i];
        if(right_sum==left_sum){
            return i;
        }
        left_sum +=arr[i];
    }
}
int rotate_right(int arr[],int size){
    int point_rotate=pivot_point(arr,size);
    for(int i=0;i<size;i++){
        if(arr[i]==point_rotate+1){
            arr[i]=arr[i+1];
        }
    }
    for(int i=0;i<size;i++){
        // priting the rotated array
        cout<<"Rotated array : "<<arr[i];
    }
}
int main(){
    // checking for the return value of pivot
    int arr[5]={1,2,5,7,8};
    int size=5;
    // cout<<pivot_point(arr,size);
    int k;
    cout<<"Enter the K : "<<endl;
    cin>>k;
    int rotated_array=rotate_right(arr,size);
    if(k==rotated_array){
        cout<<k<<"found"<<endl;
    }
    else return -1;
}

