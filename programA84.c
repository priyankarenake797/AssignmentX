# include<stdio.h>

void Table(int iNo)
{
   int iCnt = 0;
   for(iCnt = 1; iCnt <= 10;iCnt++)
   {
     printf("%d\n",iNo* iCnt);
   }
   
}
int main()
{
  int iValue = 0; 
  
  printf("Enter the Number : \n");
  scanf("%d",&iValue);
  
   Table(iValue);
  return 0;
}