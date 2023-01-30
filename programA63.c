#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

bool ChkEqual(int iNo1, int iNo2)
{ 
     if(iNo1 == iNo2)
    {
      return 1;
    }
   else
   {
     return 0;
   }
}


int main()
{
  int iValue1 = 0, iValue2 =0 ;
   BOOL bRet = FALSE;

  printf("Enter Two number :\n");
  scanf("%d%d",&iValue1,&iValue2);

  bRet = ChkEqual(iValue1,iValue2);

   if(bRet == 1)
   {
     printf("number is equal");
   }
   else
    {
      printf("number is not equal");
    }

   return 0;
}