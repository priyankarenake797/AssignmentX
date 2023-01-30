
# include<stdio.h>

void MultipleDisplay(int iNo)
{

   int iCnt = 0;
   
   for(iCnt = 1; iCnt <= iNo;iCnt++)
   {
   
     printf("%d\n",iNo* iCnt);
   }
   
}
int main()
{
  int iValue = 0; 
  
  printf("Enter the Number : \n");
  scanf("%d",&iValue);
  
    MultipleDisplay(iValue);


  return 0;
}