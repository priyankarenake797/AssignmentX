#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
  if(iNo == 0)
   {
      return TRUE;
   }
  else
  {
    return FALSE; 
  }
}

 
int main()
{
  int iValue = 0;
  BOOL bRet;

  printf("enter number");
  scanf("%d",&iValue);

  bRet = ChkZero(iValue);

    if(bRet == 0)
    {
      printf("it not contains 0");
    }
    else
    {
      printf("it  contains 0");
   }
   return 0;
}