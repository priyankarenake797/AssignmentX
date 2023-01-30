#include<stdio.h>


int Multiply(int iNo1, int iNo2,int iNo3)
{ 

  int iMult = 0 , iCnt = 0 ;
    
  for(iCnt = 1; iCnt <=(iNo1 * iNo2); iCnt++)
    {
      
      iMult = iNo3 * iCnt;
    }
  return iMult;     
}


int main()
{
  int iValue1 = 0, iValue2 =0 , iValue3 = 0 ;
  int iRet = 0; 
  printf("Enter a three number :\n");
  scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

  iRet = Multiply(iValue1,iValue2,iValue3);

   printf("The multiplication is :%d",iRet);

   return 0;
}