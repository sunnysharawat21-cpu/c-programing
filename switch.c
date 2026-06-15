/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a;

int main()
{
    printf("enter a value");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("value is 1\n");
        break;
        case 2:
        printf("value is 2\n");
        break;
         case 3:
        printf("value is 3\n");
        break;
         case 4:
        printf("value is 4\n");
        break;
         case 5:
        printf("value is 5\n");
        break;
        default:
        printf("nothing matched");
        
        
    }

    return 0;
}