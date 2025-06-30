// Leetcode-9 
// Palindrome then return true otherwise false
#include<iostream>
using namespace std;
int palindrome(int n)
{
    if(n<0) {
        return false;
    };
     long long int rev_x=0,digit,temp=n;
    while(n!=0){
        int digit=n%10;
        rev_x=(rev_x*10)+digit;
        n=n/10;
    }
    if(rev_x==temp) {
        return true;
    }
    else 
    {
        return false;
    }
    int main(){
        int n;
        cout<<"Enter the n : ";
        cin>>n;
        palindrome(n);
        return 0;
    }
}
