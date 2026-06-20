/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=44;
    int *ptr=NULL;
    printf("the addres of NULL pointer is %d\n",ptr);
    if(ptr != NULL)
    printf("Hello World %d",*ptr);
    else
    printf("the pointer is NULL and cant be derefrenced");
    return 0;
}
