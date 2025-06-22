// to print the pattern 
// #include<iostream>
// using namespace std;
// int main(){
//     int r,c; 
    
//     printf("Enter the rows and colums : ");
//     cin>>r>>c;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }

// }


// to print the triangle pattern 
// #include<iostream>
// using namespace std;
// int main(){
//     int r,c;
//     printf("Enter the rows and column of the pattern : ");
//     cin>>r>>c;
//     // the logic is like this :
//     /*
//    r starts from the 1 and increases +1 when we increase the
//    colums +1

//     */
//    for(int i=1;i<=r;i++){
//     for(int j=1;j<=r-i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//    }

// }



#include<iostream>
using namespace std;
int main(){
  typedef struct student{
    char name;
    int marks[20];
    int rollno;

   } stdt;

   stdt s1,s2;
   int n;
   printf("Enter the number of student : ");
   cin>>n;

  for(int i=1;i<=n;i++){
    printf("Enter the marks : ");
    cin>>s1.marks[i];
    printf("Enter the name of the student : ");
    cin>>s1.name;
    printf("Enter the roll no : ");
    cin>>s1.rollno;
   
} 

cout<<" Name : "<<s1.name<<endl;
cout<<" Roll no : "<<s1.rollno<<endl;
for(int i=1;i<=n;i++){
   cout<<" Marks : "<<s1.marks[i]; 
}

}