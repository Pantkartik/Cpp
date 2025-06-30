// /*
// A funtion is a  defined set of code which can 
// be called again and again to do that task efficiently
// and with better readibility

// */


// // for example 
  #include<iostream>
  using namespace std;
 // definig the function
   int power(int a,int b){
    int ans = 1;
    for(int i=1;i<=b;i++) {
        ans = ans * a;
    }
    return ans;
   }
      int main(){
     int a,b;
     cin >> a >> b;
     int answer=power(a,b);
     cout<<answer;
     return 0;
 }

// 2nd method
#include<iostream>
using namespace std;
int power(){
    int a,b,i=1,ans=1;
    cin >> a >> b;
    for(i;i<=b;i++){
        ans=ans*a;
    } return ans;
}
int main(){
cout<<power()<<endl;
}

// to check whether the number is odd or even
#include<iostream>
using namespace std;
int check(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%2==0) {
        cout<<"EVEN"<<endl;
        return 1;
    }
        else{
            
        cout<<"ODD"<<endl;
        return 0;
        }
}
}
    int main(){
        int checking=check();
        cout<<checking;
    }


