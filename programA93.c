#include<stdio.h>

int EvenFactorial(int iNo)
{
  int iCnt = 0, iFact = 1;

   
   
 for(iCnt = 1;iCnt <= iNo ;iCnt++)
   {
    if( (iNo % 2) == 0)
    {
   iFact= iFact * iNo;
     }
   }
 
  return iFact;  
}

int main()
{
 int iValue = 0, iRet = 0;
 printf("Enter a number : \n");
 scanf("%d",&iValue);

 iRet = EvenFactorial(iValue); 

  printf("Even factorial of nuber is %d",iRet); 

  return 0;
}