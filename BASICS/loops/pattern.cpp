// to print the pattern square 
// #include<iostream>
// using namespace std ;
// int main(){
//     int i=1,j=1,n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n;
//     // using while loop 
//     while(i<=n){
//         while(j<=n){

//             cout<<"*";
//         }
//     }
//     i+=1;
// }


// to print the pattern using for loops
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,j=1,n;
//     // so the logic is that 
//     /*
//     when i=1 and j<=n and j+=1 keep on till n reaches to limit
//     when n reaches to limit then the i=2 comes which iterate i+=1 than follwing same 
//     as above 
//     */
//    cout<<"Enter the number n : ";
//    cin>>n;
//    while(i<=n){
//        j=1;
//     while(j<=n){
//         cout<<j;
//         j+=1;
//     }
//     cout<<endl;
//     i+=1;
// }
// }

// to print 321 
         // 321
         // 321 
/*
logic 
here the value of j is decreasing like j=n and than keep on decreasing by 1 
but i remains same as previous */
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,j,n;
//     cout<<"Enter the n: ";
//     cin>>n;
//     while(i<=n){
//         j=n;
//         while(j>=1){
//             cout<<j;
//             j--;
//         }
//         cout<<"\n";
//         i+=1;
//     }
// }



/*to print 1 2 3 
           4 5 6
           7 8 9


            LOGIC 
    when i=1 ( j=1 to j=3 {j+1})  i+=1
    when i=2 ( j=n+j ) i+=1
    when i=3 ( j=)
*/
// #include<iostream>
// using namespace std;
// int main(){
// int i=1,j=1,count=1,n;
// cout<<"enter n ";
// cin>>n;
// for(i;i<=n;i++){
//     j=1;
//     for(j;j<=n;j++){
//         cout<<count;
//         count+=1;
        
//     }
//     cout<<endl;
    
// }

// }


// triangle pattern 
/* 
Logic -   
 when i=1 than j=1
 i=2 than j=1 to j=2 
 i=3 than j=1 j=2 j=3 

 seeing the pattern (j<=i) and (i<=n)

*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,n;
    cout<<"Enter the number n: ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<"*";
            j+=1;
        }
        i+=1;
        cout<<"\n";
    }
}
//  using for loop 
#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,n;
    cout<<"Enter the number n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// to print the pattern 
/*
        1
        2 2
        3 3 3
        4 4 4 4

        i=1 j=i
        i=2 j=i
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,n,count=1;
    cout<<"Enter the n: ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<count;
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}