/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int arr[]={1,2,3,4,5};
int main()
{
    printf("the address of first element of  array is %d \n",arr);
    printf("the address of first element of  array is %d \n",&arr);
    printf("the address of first element of  array is %d \n",&arr[0]);
    printf("the address of second element of  array is %d \n",arr+1);
    printf("the address of second element of  array is %d \n",&arr[1]);
    printf("the the value of first element of  array is %d \n",*arr);
    printf("the the value of first element of  array is %d \n",*(&arr[0]));
    printf("the the value of second element of  array is %d \n",*(arr+1));
    printf("the the value of second element of  array is %d \n",arr[1]);
    printf("the the value of second element of  array is %d \n",*(&arr[1]));

    return 0;
}
