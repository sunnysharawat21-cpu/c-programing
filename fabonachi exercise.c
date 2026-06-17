/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a,b,c,d;
int array[20]={0,1};
 int f=3;
int feb(int n){
    if(n==1||n==2){
        return n;
    }
    else{
        return feb(n-1)+feb(n-2);
    }
    
}
int main()
{
    printf("1,2,");
    for (int i =2;i<40;i++){
        // array[i]=array[i-1]+array[i-2];
        // printf("%d,",array[i]);
       
    printf("%d,",feb(f));
       f++;
      }

    return 0;
}
