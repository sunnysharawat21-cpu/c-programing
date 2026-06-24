/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int a,int b){
    int sum=a+b;
    return sum;
}
int main()
{
   int(*ptr)(int ,int);//declaring a funtion pointer
   
   ptr=&sum;//creating a funtion pointer
   int d=(*ptr)(1,2);//derefrencing a funtion pointer
   printf("the value of sum is %d",d);

    return 0;
}