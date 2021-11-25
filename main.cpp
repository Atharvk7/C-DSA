/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int fibanocci(int n){
if (n<=1)
return n;
return fibanocci(n-1)+fibanocci(n-2);

    
}
int main()
{ int n=6;
cout<<fibanocci(n);
  return 0;

}

