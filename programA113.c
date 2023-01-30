#include<stdio.h>

void RangeSum(int iStart , int iEnd)
{  
   int iCnt = 0 ,iSum = 0;
   for(iCnt = iStart ;iCnt <= iEnd ; iCnt++)
    {
      
       iSum = iSum + iCnt;
       
    }
  printf("Addition of all even Numbers in Between range :%d\n",iSum);

}

int main()
{ 
  int iValue1 = 0, iValue2 = 0;
 
  printf("Enter starting point");
  scanf("%d",&iValue1);

  printf("Enter ending point");
  scanf("%d",&iValue2);


  RangeSum(iValue1,iValue2);
  
 return 0;
}