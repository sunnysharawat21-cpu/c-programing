/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
	int a=2;
	float b=4.4;
	void *ptr;
	ptr=&a;
	printf("the value of a is %d \n",*((int *)ptr));
	ptr=&b;

	printf("the value of a is %f \n",*((float *)ptr));

	return 0;
}