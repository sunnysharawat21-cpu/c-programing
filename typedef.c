/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
typedef unsigned long ul;
ul l1=22279889UL;

struct student{
    int id;
    float marks;
    char character;
    char name[];
}ram,syam;
typedef struct student std;
int main()
{
    printf("%lu\n",l1);
    printf("Hello World");
    struct student sunny,nikhil,ritik;
    std s1;
    struct student ram={4,4.44,'e'};
    struct student syam={5,44.44,'s'};
    
    sunny.id=1;
    nikhil.id=2;
    ritik.marks=34;
    sunny.marks=13;
    nikhil.marks=25;
    s1.marks=245;
    ritik.id=3;
    sunny.character='s';
    nikhil.character='n';
    ritik.character='r';
    strcpy(sunny.name,"singh shaarawat");
    printf("the marks of sunny is %f\n",sunny.marks);
    printf("the name of sunny is %s\n",sunny.name);
    printf("the marks of nikhil is %f\n",nikhil.marks);
    printf("the marks of ritik is %f\n",ritik.marks);
    printf("the marks of s1 is %f\n",s1.marks);
    return 0;
}
