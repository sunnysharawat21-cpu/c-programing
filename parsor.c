/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void parsor(char* string){
    int ln=0;
    int index=0;
    for(int i=0;i<strlen(string);i++){
        if(string[i]=='<'){
            ln=1;
            continue;
        }
        else if(string[i]=='>'){
            ln=0;
            continue;
        }
        if(ln==0){
            string[index]=string[i];
            index++;
         
        
        }
      
    }
    
    string[index]='\0';
      while (string[0]==' '){
             for(int i=0;i<strlen(string);i++){
      
         
         
            string[i]=string[i+1];
       
        
    }
        }
        while(string[strlen(string)-1]==' '){
            string[strlen(string)-1]='\0';
        }
}
int main()
{
   char string[]="<hadh>     this is the line    <djsl>";
  parsor(string);
  printf("~~%s~~",string);
    return 0;
}
