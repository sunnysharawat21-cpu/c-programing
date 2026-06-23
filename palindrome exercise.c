/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int  palindrome1(char array[]){
    char tempry[9];
       strcpy(tempry,array);
   for (int i=0;i<=strlen(array)/2;i++){
       char temp;
       
       temp=array[i];
       
       array[i]=array[strlen(array)-1-i];
       array[strlen(array)-1-i]=temp;
   }
    if(strcmp(tempry,array)==0){
        return 1;
    }
}
int main()
{
  char input[9];
  printf ("enter the number u want to check palindrome\n");
  scanf("%s",&input);
   char temp[9];
   strcpy(temp,input);
//   char reversed[9];
   
//   strcpy(reversed,palindrome1(input));
   if(palindrome1(input)==1){
       printf("the number is a palindrome\n");
   }
   else{
       printf("the number is not a palindrome\n");
   }
    // printf("Hello World %s\n",reversed);
    // printf("Hello World %s\n",temp);

    return 0;
}