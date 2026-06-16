/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a,b;
float c;
int main()
{
    printf("enter the number for type of conversionn\n 1 for kms to miles \n2 for inches to foot \n 3 for cms to inches\n ");
    scanf("%d",&a);
    printf("enter the value\n");
    scanf("%d",&b);
    
    if (a==1){
        c=b*0.621;
    printf("%d kms is equal to %f miles",b,c);}
    else if(a==2){
        c=(float)b/12;
    printf("%d inches = %.3f foot",b,c);}
    else if(a==3){
        c=(float)b/2.5;
    printf("%d cms = %.3f inches",b,c);}
    else{
    printf("choose the correct option");}
    return 0;
}
