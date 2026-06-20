/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

***************  // *ptr ==34;// 34 is now stored at random adrres which is not a good thing
   ****************************************************************/
#include <stdio.h>

int main()
{
    int a=3;
    int *  ptr;// this is now a wild pointer
    
    ptr=&a;// this is not a wild pointer now
    
    printf("Hello World %d\n",*ptr);

    return 0;
}
