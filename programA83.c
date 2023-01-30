//time complexity reduced karayach kas ani time complexity is only for loop 

#include<stdio.h>

int  Factorial(int iNo)
{
  int iCnt = 0 , iMult = 1;
   
    if(iNo <0)
    {
      iNo = -iNo;
    }
    
   for(iCnt = 1 ; iCnt <= iNo ; iCnt++)  
   {
        iMult = iMult * iCnt;
       
  }
 return iMult; 
}

int main()
{
   int iValue = 0;
   int iRet = 0;
   printf("Enter number : \n");
   scanf("%d",&iValue);
   
   iRet = Factorial(iValue);
 printf("factorial pf number is :%d",iRet);  
   return 0;
}