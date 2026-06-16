/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a,b,c;
//with return value and argument
int sum(int a,int b){
    return a+b;
}
//without return with argument
void star(int n){
    for(int i=0;i<n;i++){
        printf("%c\n",'*');
    }
    
    
}

//without argument without return value
void empty(){
    printf("this doesnt return any value\n");
}
//without argument with return vlaue
int num(){
    int i;
    printf("enter a number\n");
    scanf("%d",&i);
    return i;
}
int main()
{
    int d =num();
    printf("the num is %d\n",d);
    empty();
    star(8);
    printf("enter the value of a\n");
    scanf("%d",&a);
    
    printf("enter the vlaue of b\n");
    scanf("%d",&b);
    c=sum(a,b);
    
    printf("the sum is %d\n",c);

    return 0;
}
