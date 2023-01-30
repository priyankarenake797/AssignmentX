/*
    Input N : 6
   
        NO : 66

   elements : 85 66 3 66 93 88
o/p : 3

  Input N : 6
   
        NO : 93

   elements : 85 66 3 66 93 88
  o/p : 4

 Input N : 6
   
        NO : 12

   elements : 85 11 3 15 11 111
  o/p : -1
*/

#include<stdio.h>

int  LastOcc(int Arr[] , int iLength ,int iNo)
{
   //logic
}

int main()
{
  int iSize = 0, iCnt = 0, iRet = 0, iValue =0;
  int *p = NULL;

   printf("enter number of elements ");
   scanf("%d",&iSize);

   printf("Enter the number");
   scanf("%d",&iValue);

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

     iRet = LastOcc(p,iSize,iValue);

       if(iRet == -1)
       {
          printf("There is no such number");
       }
      else
      {
         printf("Last occurence number is %d",iRet);
      }
    free(p);
  
    return 0;
}
