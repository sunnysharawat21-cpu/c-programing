/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a,b,c,d;
char star;
int main()
{
    printf("enter the number 0  for straight 1 for inverted\n");
    scanf("%d",&a);
    printf("enter the number of rows\n");
    scanf("%d",&b);
      if(a==1){
    for(int i=1;i<=b;i++){
        for(int j=0;j<i;j++){
            
           
            star='*';
          printf("%c",star);
        }
  
   
             printf("\n");
    }
 }
 else if(a==0){
     for(int i=1;i<=b;i++){
        for(int j=b;j>i;j--){
            
           
            star='*';
          printf("%c",star);
        }
  
   
             printf("\n");
    }
 }
 
    return 0;
}
