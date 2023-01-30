/*
    Input N : 6
   
        Start : 60
       
        End : 90

   elements : 85 66 3 76 93 88

   o/p : 66 76 88

  Input N : 6
   
       Start : 30
       
        End : 50

   elements : 85 66 3 76 93 88

   o/p : -------

*/

#include<stdio.h>

void Range(int Arr[] , int iLength ,int iStart,iEnd)
{
   //logic
}

int main()
{
  int iSize = 0, iCnt = 0, iRet = 0, iValue1=0,iValue2=0;
  int *p = NULL;

   printf("enter number of elements ");
   scanf("%d",&iSize);

   printf("Enter the starting point");
   scanf("%d",&iValue1);

   printf("Enter the ending point");
   scanf("%d",&iValue2);

  p = (int)malloc(iSize * sizeof(int));

      if(p == NULL)
       {
          printf("Unable to allocate memory");
         return -1;
       }  

     printf("Enter %d elements of ",iLength);
      for(iCnt = 0; iCnt < iLength ; iCnt++)
       {
         printf("enter elements :%d",iCnt+1);
         scanf("%d",&p[iCnt]);
       }  

     iRet = Range(p,iSize,iValue1,iValue2);

     free(p);
  
    return 0;
}
