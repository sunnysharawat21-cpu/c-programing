/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
union employ{
    int id;
    float marks;  // all share the same memory ,only 1 can acces that memory at a time
    char character;
    
} e1,e1;
int main()
{
    e1.id=2;
    e1.marks=44;
    e1.character='k';
    printf("the id of e1 is %d\n",e1.id);
    printf("the marks of e1 is %2.0f\n",e1.marks);
    printf("the character of e1 is %c\n",e1.character);

    return 0;
}