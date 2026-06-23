/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	FILE *ptr;
	ptr=fopen("my.txt","r");
	//   char c=fgetc(ptr);
	// printf("this is %c\n",c);

	// char str[4];
	// fgets(str,9,ptr);
	// printf("the string is %s \n",str);
	fclose(ptr);

	ptr = fopen("my.txt","w");

	fputc('o',ptr);
    fputs(" yessss",ptr);



	return 0;
}
