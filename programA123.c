#include<stdio.h>

int  CountTwo(int iNo)
{
   int iCnt = 0 ,iAns=1;
   
    if(iNo == 2)
    {
   for(iCnt = 1;iCnt <= iNo ;iCnt++)

     iAns = iCnt;
    }
   return iAns;
}


int main()
{
  int iValue = 0 , iRet = 0; 
  
  printf("Enter the number: \n");
  scanf("%d",&iValue);
  
    iRet = CountTwo(iValue);

printf("%d",iRet);
  return 0;
}
