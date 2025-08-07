// //  88. Merge Sorted Array
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 

// Example 1:

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
// Example 2:

// Input: nums1 = [1], m = 1, nums2 = [], n = 0
// Output: [1]
// Explanation: The arrays we are merging are [1] and [].
// The result of the merge is [1].
// Example 3:

// Input: nums1 = [0], m = 0, nums2 = [1], n = 1
// Output: [1]
// Explanation: The arrays we are merging are [] and [1].
// The result of the merge is [1].
// Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
 

// Constraints:

// nums1.length == m + n
// nums2.length == n
// 0 <= m, n <= 200
// 1 <= m + n <= 200
// -109 <= nums1[i], nums2[j] <= 109



/* Logic kuch es prakar h ki */


// ///   we compare the indicies of the array 1 and array 2 and increment it if smaller opr greater and place it in the array 3 incrementing the indicies of the array 3 


#include <iostream>
using namespace std;

void merge_sort(int A1[], int A1_size, int A2[], int A2_size, int A3[]) {
    int i = 0, j = 0, k = 0;
    
    while(i < A1_size && j < A2_size) {
        if (A1[i] < A2[j]) {
            A3[k++] = A1[i++];
        } else {
            A3[k++] = A2[j++];
        }
    }
    
    while(i < A1_size) {
        A3[k++] = A1[i++];
    }
    
    while(j < A2_size) {
        A3[k++] = A2[j++];
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int A1[5] = {1, 3, 6, 8, 10};
    int A1_size = 5;
    int A2[3] = {2, 5, 7};
    int A2_size = 3;

    int A3[8];               // Size 5 + 3
    int A3_size = A1_size + A2_size;

    merge_sort(A1, A1_size, A2, A2_size, A3);

    print(A3, A3_size);

    return 0;
}
