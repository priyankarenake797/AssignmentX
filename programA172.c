/* smallest number is 
    Input : N : 6

   Elements : 85 66 3 66 93 88

  output : 3

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Minimum(int Arr[],int iLength)
{

  //Logic

}

int main()
{
   int iSize = 0, iRet =0 , iCnt = 0 , iValue = 0;
   int *p = NULL;

  
  printf("Enter number of elements");
  scanf("%d",&iSize);

   printf("Enter number ");
   scanf("%d",&iValue);

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

    iRet = Minimum(p , iSize);

    printf("smallest Number  is %d",iRet);

   free(p);

   return 0;


}