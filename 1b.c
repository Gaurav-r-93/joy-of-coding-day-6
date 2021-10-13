#include <stdio.h>
int main()
{
   char str[20];
   printf("enter the string:");
   scanf("%[^\n]%*c", str);
   printf("the string is :-%s", str);
   return 0;
}
