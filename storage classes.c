/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum=8;
int counter() {
	static int a =0;//static variable keep the previus value saved
	extern int sum;//extern will use the global variable otherwise it will take local variable of funtion
	// printf("Hello World %d \n",a);
	a++;
	return sum;
}
int main()
{
	printf("the sum is %d\n",counter());
	register int num=4;// this command saves the variable in a register
		printf("the num is stored in the fast registers %d\n",num);
	counter();
	counter();
	counter();
	counter();
	return 0;
}
