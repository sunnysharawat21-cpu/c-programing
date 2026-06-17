/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>



char s1[]="sunny";
char s2[]="sharawat";
;
int num[]={1,2,3,4,5};
char s3[];
void reverse(char*array){
    int start=0;
    int end=strlen(array)-1;
   while(start<end){
       char temp=array[start];
       
       
       array[start]=array[end];
       array[end]=temp;
       start++;
       end--;
   }
}
int main()
{
   puts(s1);
puts(s2);
printf("the length of s1 is %d \n",strlen(s1));
// puts(strcat(s1,s2));
printf("the reverse of s2 is \n");
int j=sizeof(num)/sizeof(num[0]);
printf(" the size of array is %d\n",j);

reverse(s2);
reverse(s2);

printf("%s\n",s2);
strcpy(s3,strcat(s1,s2));
puts(s3);
    return 0;
}
