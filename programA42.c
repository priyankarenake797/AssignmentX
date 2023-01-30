// Accept the number from user is display factors by .......(decreasing order)<------he rahil ahe

#include<stdio.h>

void FactRev(int iNo)
{
 int iCnt = 0 ;

   
   printf("Factors are : \t");
    
   for(iCnt = 1; iCnt <=(iNo/2); iCnt++)  
   {
     if((iNo % iCnt) == 0)
      {
           printf("%d\n",iCnt--);
          
      }
   }
}

int main()
{
   int iValue = 0;

   printf("Enter the number : \n");
   scanf("%d",&iValue);

   FactRev(iValue);

  return 0; 
}


