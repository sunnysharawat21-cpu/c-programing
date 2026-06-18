/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>//for memory allocation malloc,calloc,

int main()
{
	int *ptr;
	int *ptr1;

	ptr=malloc(3*sizeof(int));//memeory allocation randomly ,gives garbage value when we dont assign value
	ptr1=(int *)calloc(3,sizeof(int));//continues memeory allocation
	ptr=(int*)realloc(ptr,4*sizeof(int));//it re allocater the existing memeory and also change its size
	//malloc
	for(int i=0; i<3; i++) {
		printf("enter the value numver of %d of this array\n",i);
		scanf("%d",&ptr[i]);
	}
	for(int i=0; i<3; i++) {
		printf("the value of num at position %d is %d\n",i,ptr[i]);

	}
	//calloc
	// 	for(int i=0; i<3; i++) {
	// 		printf("enter the value numver of %d of this array\n",i);
	// 		scanf("%d",&ptr1[i]);
	// 	}
	for(int i=0; i<3; i++) {
		printf("the value of num at position %d is %d\n",i,ptr1[i]);//it start the value from 0 when we dont give it a value


	}
	//realloc
	for(int i=0; i<4; i++) {
		printf("enter the new value numver of %d of this array\n",i);
		scanf("%d",&ptr[i]);
	}
	for(int i=0; i<4; i++) {
		printf("the new value of num at position %d is %d\n",i,ptr[i]);

	}
	free(ptr);// it frees the existing memeory
		for(int i=0; i<4; i++) {
		printf("the free new value of num at position %d is %d\n",i,ptr[i]);

	}
		for(int i=0; i<4; i++) {
		printf("enter the new value numver of %d of this array\n",i);
		scanf("%d",&ptr[i]);
	}
	for(int i=0; i<4; i++) {
		printf("the new value of num at position %d is %d\n",i,ptr[i]);

	}
	return 0;
}