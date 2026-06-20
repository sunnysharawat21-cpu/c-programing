/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{  int  sum =0;
    int a[2][2]={{1,2}
                ,{3,4}};
                
                
    int b[2][2]={{1,1}
                ,{2,2}};
    int c[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for (int k=0;k<2;k++){
                sum += a[i][k] * b[k][j];
               
            }
            c[i][j]=sum;
            sum=0;
        }
    }
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d   ",c[i][j]);
    }
    printf("\n");
}
    printf("Hello World");

    return 0;
}
