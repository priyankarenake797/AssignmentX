#include<stdio.h>

int main()
{ 
   int iToken =11;

  printf("Tumacha token no sanga : \n");
  scanf("%d",iToken);

  switch(iToken)
  {
      case 11 : printf("mulachi chappal \n");
                   break;
      case 21 : printf("mulichi chappal \n");
                   break;
      case 51 : printf("aaichi chappal \n");
                   break;
      case 101 : printf("vadilanchi chappal \n");
                   break;
     
    default : printf("sorry:\n");
                  break;

  }

  return 0;
}