/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	//for readding a file
	FILE *ptr=NULL;
	char stringy[]="this is writing";
// 	ptr=fopen("myfile.txt","r");
// 	char string[28];
// 	fscanf(ptr,"%s",string);

// 	printf("the content of this file is %s",string);
	//for writing afile
// 	ptr=fopen("myfile.txt","w");
// 	fprintf(ptr,"%s",stringy);
//this is appending
	ptr=fopen("myfile.txt","a");
	fprintf(ptr,"%s\n",stringy);


	return 0;
}
