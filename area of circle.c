/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int a1=0,a2=8,b1=0,b2=6;
float distance(int x1 ,int y1,int x2,int y2){
    float d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return d;
}
float area( float(* ptr1)(int ,int ,int,int)){
    float a=3.14*pow(ptr1(a1,b1,a2,b2),2);
    return a;
}
int main()
{
    float(* ptr)(int ,int ,int,int);
    ptr=distance;
    
    float f=distance(a1,b1,a2,b2);
    printf("Hello World %f\n",f);
    float a=area(ptr);
    printf("the area of the circle is %f",a);
    return 0;
}
