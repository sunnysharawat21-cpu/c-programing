/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int age;

int main()
{
    if(2>10){
    printf("Hello World");}
    printf("enter your age ");
    scanf("%d",&age);
    printf("u have entered %d as your age\n",age);
    if(age>=18){
        printf("u can vote");
        
    }
else if(age<18){
    printf("you cant vote");
    
}
else{
    printf("wrong input");
}
    return 0;
}