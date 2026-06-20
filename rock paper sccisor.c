/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int rando(int n){
    srand(time(NULL));
    return (rand()%n)+1;
}
int k=1;
int a=0;
int b=0;
int main()
{
    char name[9];
    printf("enter your name\n");
    scanf("%s",&name);
    while (k<=3){
    int i;
    start:
    printf("enter 1 for rock 2 for sccisor 3 paper\n");
    scanf("%d",&i);
    
    int j=rando(3);
    char s[8]="";
    char c[8]="";
   // for user 
    if(i==1){
        strcpy(s,"rock");
    }
    else if(i==2){
        strcpy(s,"sccisor");
    }
    else if(i==3){
        strcpy(s,"paper");
    }
    //for computer
    if(j==1){
        strcpy(c,"rock");
    }
    else if(j==2){
        strcpy(c,"sccisor");
    }
    else if(j==3){
        strcpy(c,"paper");
    }
    
    printf("%s     : %s\n",name,s);
    printf("computer   : %s \n",c);
  
    if (i==1&&j==1){
        goto start;
    }
    else if(i==1&&j==2){
        printf("you won\n");
        a++;
    }
    else if(i==1&&j==3){
        printf("you lose\n");
        b++;
    }
    
    // for 2
    else if (i==2&&j==2){
        goto start;
    }
    else if(i==2&&j==3){
        printf("you won\n");
        a++;
    }
    else if(i==2&&j==1){
        printf("you lose\n");
        b++;
    }
    //for 3
    else if (i==3&&j==3){
        goto start;
    }
    else if(i==3&&j==1){
        printf("you won\n");
        a++;
    }
    else if(i==3&&j==2){
        printf("you lose\n");
        b++;
    }
    else{
        printf("not a valid input\n");
        goto start;
    }
    
    k++;
      printf("score sunny:%d   computer:%d\n",a,b);
    }
if(a>b){
    printf("winner winner chikeen dinner\n");
}
else if (a<b){
    printf("the damn machine win");
}
    return 0;
}