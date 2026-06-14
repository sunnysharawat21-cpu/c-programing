#include <stdio.h>
int a,b;
int main()
{
   
   a=4;
   b=0;
   printf("%d\n",a^b);
   printf("%d\n",a&b);
   printf("%d\n",a|b);
   printf("%d\n",a&&b);//and
   printf("%d\n",a||b);//or
   printf("%d\n",a%b);//remainder
   printf("%d\n",!(a^b));//xnor
   
    return 0;
}