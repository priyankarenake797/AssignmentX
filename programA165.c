/*
Input : N : 6

Elements  : 15 66 3 70 10 88

output : 45

Input : N : 6

Elements : 44 66 72 70 10 88

output : 0

*/

#include<stdio.h>
int Product(int Arr[],int iLength)
{
    // Logic

}

int main()
{
  
   int iSize = 0, iRet =0 , iCnt = 0;
   int *p = NULL;
  
  printf("Enter number of elements");
 scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
   {
     printf("Unable to allocate memory");
      return -1;
   }
   printf("Enter %d elements ",iLength);

   for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
       printf("enter elements : %d",iCnt + 1);
       scanf("%d",&p[iCnt]);
    }

    iRet = Product(p , iSize);

    printf("Product is %d",iRet);

   free(p);
   return 0;
}