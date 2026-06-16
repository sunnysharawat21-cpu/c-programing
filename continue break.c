/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int age ;
char name[10];
int main()
{

for(int i=0;i<10;i++){
    printf("whats your name \n");
    scanf("%s",&name);
    if(strcmp(name,"sunny")==0){
        printf("no need of test you can drive\n");
        continue;}
        else{
            printf("whats your age \n");
            scanf("%d",&age);
            if(age<18){
                printf("u cant drive\n");
                
            }
            else{
                printf("u can drive\n ");
                break;
            }
        }
    
}
    return 0;
}
