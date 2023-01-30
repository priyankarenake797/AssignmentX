#include<stdio.h>

void Diplay(int  iNo)
{
   int iCnt = 0;
  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%d",iCnt);
  }
  
}

int main()
{
   int iValue =0;

   printf("Enter a number ");
  scanf("%d",&iValue);

  Diplay(iValue);
 return 0;


}