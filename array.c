/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int j;
int array[4]={1,2,3,4};
int array2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int main()
{
    for (int i=0;i<4;i++){
        printf("%d\n",array[i]);
    }
for(int i=0;i<3;i++){
    for (int j=0;j<4;j++){
         printf("%d       ",array2[i][j]);
    }
   printf("\n");
}
    return 0;
}