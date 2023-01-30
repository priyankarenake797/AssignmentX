#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
  if(iNo > 100) 
 {
     return true;
  }
  else
  {
    return false;
  }

}


int main()
{
    int iValue = 0;
   BOOL bRet = FALSE;
 
   printf("Please enter number :\n");
   scanf("%d",&iValue);

   bRet = ChkGreater(iValue);

   if(bRet == 1)
   {
    printf("Greater");
   }
   else
   {
    printf("smaller");
   }

  return 0;
}