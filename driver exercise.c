/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
char nam[10];
 char d[10];
struct driver{
    char name[10];
    char num[10];
    
    int kms;
    char route[];
}d1,d2,d3;
int main()
{
    printf("enter the name of first driver\n");
    scanf("%s",d1.name);
    printf("enter the driver license of first driver\n");
    scanf("%s",d1.num);
    printf("enter the kms of first driver\n");
    scanf("%d",d1.kms);
     printf("enter the name of second driver\n");
    scanf("%s",d2.name);
    printf("enter the driver license of second driver\n");
    scanf("%s",d2.num);
    printf("enter the kms of second driver\n");
    scanf("%d",d2.kms);
     printf("enter the name of third driver\n");
    scanf("%s",d3.name);
    printf("enter the driver license of third driver\n");
    scanf("%s",d3.num);
    printf("enter the kms of third driver\n");
    scanf("%d",d3.kms);
    
  printf("the details of first driver is %s ,%s ,%d\n",d1.name,d1.num,d1.kms);
  printf("the details of second driver is %s ,%s ,%d\n",d2.name,d2.num,d2.kms);
  printf("the details of third driver is %s ,%s ,%d\n",d3.name,d3.num,d3.kms);

    return 0;
}