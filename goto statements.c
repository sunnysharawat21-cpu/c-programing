/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    for (int i=0;i<10;i++){
        printf("entring loop 2\n");
        for (int i=0;i<10;i++){
            printf("enter any number , enter 0 to exit both loops\n");
            int num;
            scanf("%d",&num);
            if(num==0){
                goto end;
            }
        }
    }
end:
printf("this is end\n");
goto labely;
printf("this is supposed to be skipped");
labely:
printf("this is the power of label , we can take our code where the label: is written\n");
goto  sunny;
printf("this is supposed to be skipped");
 sunny:
printf("this is the power of label , we can take our code where sunny: is written");
    return 0;
}
