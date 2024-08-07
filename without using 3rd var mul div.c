#include<stdio.h>
int main()
{
   int a,b;
   printf("enter the value of a,b");
   scanf("%d%d",&a,&b);
   a = a*b;
   b = a/b;
   a = a/b;

   printf("the value of a is %d\n",a);
   printf("the value of b is %d\n",b);
   return 0;
}
