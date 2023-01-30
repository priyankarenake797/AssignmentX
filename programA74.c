#include<stdio.h>

void OddDisplay(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1 ;iCnt <= ((iNo % 2) != 0); iCnt++)
   {
        printf("%d",iCnt);
   }

}

int main()
{
   int iValue =0;
   printf("Enter no");
   scanf("%d",&iValue);

   OddDisplay(iValue);

  return 0;
}