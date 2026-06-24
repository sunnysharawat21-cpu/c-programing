/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int a,int b){
    int sum=a+b;
    return sum;
    
}

void hello(int (*fptr)(int,int)){
    printf("hello user\n");
    printf("the sum is %d\n",fptr(1,2));
}
void goodmorning(int (*fptr)(int,int)){
    printf("goodmorning user\n");
    printf("the sum is %d\n",fptr(1,2));
}

int main()
{
    int (*ptr)(int,int);
    ptr=sum;
    hello(ptr);
    goodmorning(ptr);
    return 0;
}
