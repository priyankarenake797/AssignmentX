#include<stdio.h>

int KMtoMeter(int iNo)
{
   int meter = 0;
   
  meter = 1000 * iNo;
   
  return meter ;
}


int main()
{
  int iValue = 0 , iRet = 0; 
  
  printf("Enter the distance: \n");
  scanf("%d",&iValue);
  
    iRet = KMtoMeter(iValue);

printf("Number is Kilometer into meter : %d",iRet);
  return 0;
}
