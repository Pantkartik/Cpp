// // to reverse the array 
// /*
//  to logic kuch es prakar h ki 
//  lets say we have a array with indexing 0 to n 
//  and start , end 
//  swapping b/w start and end and then we start++ and end--
 
// */
// #include<iostream>
// using namespace std ;
// int rev(int arr[],int n){
//     int start,end,index=sizeof(arr),temp=0;
//     for(int i=0;i<n;i++){
//         arr[i]=temp;
//         temp=index;
//         index=arr[i];
//         start++;
//         end--;
//     }
// }         
// int main(){
//     int arr[10]={2,5,54,23,77,32,86,21,46,88};
//     int n;
//     cout<<"Enter the elements of array : ";
//     cin>>n;
//     rev(arr,n);
//     cout<<"REVERSED ARRAY"<<endl;
//     for(int i=0;i<n;i++){
//         rev(arr,n);
//         cout<<arr[i];
//     }
// }



// corrected code
#include<iostream>
using namespace std;
void rev(int arr[],int n){
    int start=0,end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printfnc(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[4]={1,2,3,4};
    int n=4;
    rev(arr,n);
    cout<<"reversed : ";
    printfnc(arr,4);

}