// // You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

// For example:

// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
// Note :
// A duplicate number is always present in the given array.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <=  T  <= 10
// 2 <=  N <= 10 ^ 5
// 1 <=  ARR[i]  <= N - 1
// 


 int findDuplicate(vector<int> &arr) 
    {

        int ans=0;
        for(int i=0;i<arr.size();i++){
            // xor ing all the elements of array
        
            ans=ans^arr[i];
        }
        for(int i=1;i<arr.size();i++){
            ans=ans^i;
        }
        return ans;
    }
























// #include<iostream>
// using namespace std;
// int dupint(int arr[],int n){
//     int i,count=0;
//     int start=0,end=n-1;
//     while(start!=end){
//         for(i=0;i<n;i++){
//             if(arr[i]=arr[i+1]){
//                 count++;
//             }
//             break;
//         }
//         start++;
//     }
// }
// int printdup(int arr[],int n){
//     int i;
//     cout<<arr[i]<<endl;
    
// }
// int main(){
//     int n;
//     cout<<"ENTER THE SIZE OF THE ARRAY : ";
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         cout<<"Enter the elements of the array : ";
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
    
//     dupint(arr,n);
//     printdup;
// }


