/* 
    Input : N : 6

   Elements : 8225 665 3 76 953 858

  output : 665 953  858

*/

#include<stdio.h>

void Digits(int Arr[],int iLength)
{

  //Logic

}

int main()
{
   int iSize = 0, iCnt = 0;
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

     Digits(p , iSize);
   
   free(p);

   return 0;
}