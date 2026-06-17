/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a =3;
int b =4;
int swap(int* i,int* j){//call by reference , by taking adresses as input we can change the global vaariables in local funtion
    
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
    
}
int main()
{
    printf("the value of a now is %d\n",a);
    printf("the value of b now is %d\n",b);
    swap(&a,&b);
    printf("the value of a now is %d\n",a);
    printf("the value of b now is %d\n",b);

    return 0;
}
