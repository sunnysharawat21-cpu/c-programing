/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int func(){
    static int var=21;
    printf("the value of var is %d\n",var);
    var++;
}
int main()
{
    func();
    func();
    func();
    func();
    func();

    return 0;
}