#include<stdio.h>

int main()
{
  char Name[30];
 printf("please enter full name :\n");
 scanf("%[^'\n']s",Name);
 printf("your full name is %s:",Name);

   return 0;
}