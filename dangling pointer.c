/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int* danglingfuntion(){
    static int sum;
    int a=4;
    int b=5;
    sum=a+b;
    
    return &sum;
}
int main()
{
	//case 1 : deallocation of memeory block creates dangling pointer
	int *ptr;

	ptr=(int *)malloc(3*sizeof(int));
	ptr[0]=2;
	ptr[1]=3;
	ptr[2]=4;


	free(ptr);//ptr is now a dangling pointer

	printf("Hello Worldyyy %d\n",ptr[2]);

	// case 2 funtion returning local variable 
	int *dangptr=danglingfuntion();// dangptr is now a danglingptr because variables gets destroyer out of funtion
	dangptr=NULL;// use the NULL pointer to tackle dangling pointers
	printf("Hellooooo World %d\n",dangptr);
	// case 3: out of the scope {} prantheses
	int * dangptr2;
	{
	    int a=44;
	    dangptr2=&a;
	}
	printf("intruption\n");
	//here variables goes out of scope and is deleted hence dangptr2 is now a dangling ptr
	printf("Heeeeellooooo World %d\n",*dangptr2);
	return 0;
}
