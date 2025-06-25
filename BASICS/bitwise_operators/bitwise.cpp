/*
            BITWISE OPERATOR 
        1. AND
        2. OR 
        3. NOT
        4. XOR
..........................................................................

                        AND(&)
                     X   Y     Z
                     0   0     1
                     0   1     0
                     1   0     0
                     1   1     0
.........................................................................
                        OR(|) 

                     X   Y     Z
                     0   0     0
                     0   1     1
                     1   0     1
                     1   1     1
..........................................................................

                        NOT(!)

                          X   Z      
                          1   0
                          0   1
                     
...........................................................................alignas

                        XOR(^)
                          0   0     0
                          0   1     1
                          1   0     1
                          1   1     0


*/
#include<iostream>
using namespace std;
int main(){
    int a=4,b=8;
// 2 in binary is 010 
// 4 in binary is 100
/*
        checking the and bitwise operator where it gives the 
        y 1 when x and z are 0 and 1 both 
*/
cout<<(a & b);  // ( )is neccesary
// this will give 0 0 1 which is 0

/*
    checking the or bitwise operator where it gives the y when any one
    input is 0 than 1

*/
cout<<endl;
cout<<(a|b);
cout<<endl;
/*
checking the not bitwise */
cout<<(~a)<<(~b);
cout<<"\n";
/*
    checking the xor
*/
cout<<(a^b);
}