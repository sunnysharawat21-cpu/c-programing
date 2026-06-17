/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
char string[]="sunny";
char input[];
int main()
{
    printf("Hello World %s\n",string);
gets(input);//using gets we can take string as input
printf("%s\n",input);
puts(input);// we can also print strig using puts
    return 0;
}