/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int num;
int factorial(int num){
if (num==1||num==0){
    return 1;
    
}
else{
    return num * factorial(num-1);
}
}

int main()
{
    printf("enter a number u want factorial of \n");
    int n;
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,factorial(n));

    return 0;
}
