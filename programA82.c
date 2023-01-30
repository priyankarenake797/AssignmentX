//time complexity reduced karayach kas ani time complexity is only for loop 

#include<stdio.h>

void  Factorial(int iNo)
{
  int iCnt = 0 , iMult = 0s;
   
   printf("Factoials are : \n");
    
   for(iCnt = 1 ; iCnt <= iNo ; iCnt--)  
   {
        iMult = iMult * iCnt;
       printf("%d\n",iMult);
  }
  
}

int main()
{
   int iValue = 0;
   printf("Enter number : \n");
   scanf("%d",&iValue);
   
     Factorial(iValue);

   return 0;
}