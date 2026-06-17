/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int arr[]= {1,2,3,4};
int func(int array[]) {
	printf("%d\n",array[1]);// in array as an argumnet in funtion we can change the global values from funtion
	array[1]=23;
}
int func2(int* ptr) {
	printf("%d\n",*(ptr+2));// in array as an argumnet in funtion we can change the global values from funtion
	*(ptr +2)=33;
}
int main()
{
	printf("the value at index 1 is %d now  \n",arr[1]);
	func(arr);
	func2(arr);
	printf("the value at index 1 is %d now  \n",arr[1]);
	printf("the value at index 2 is %d now  \n",arr[2]);
	return 0;
}