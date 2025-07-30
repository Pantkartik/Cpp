// Approach is this 

/*
  1. find the pivot point 
  2. if the target lies b/w the pivot point and arr.size()-1 perform binary search 
  3. else perform binary search 

*/


#include<iostream>
using namespace std;

int get_pivot(int arr[], int size) {
    int start = 0, end = size - 1;
    while(start < end){
        int mid = start + (end - start) / 2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start; // Index of smallest element
}

int binary_search(int arr[], int start, int end, int k){
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] < k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1; // Not found
}

int main(){
    int arr[6] = {8, 10, 17, 1, 3, 5};
    int size = 6;
    int k;

    cout << "Enter the k: ";
    cin >> k;

    int pivot = get_pivot(arr, size);
    int index = -1;

    // Decide which part to search
    if(k >= arr[pivot] && k <= arr[size-1]){
        index = binary_search(arr, pivot, size - 1, k);
    } else {
        index = binary_search(arr, 0, pivot - 1, k);
    }

    if(index != -1){
        cout << k << " is found at index " << index << endl;
    }
    else{
        cout << k << " is not found." << endl;
    }

    return 0;
}
