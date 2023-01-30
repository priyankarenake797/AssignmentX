#include<stdio.h>

double RectangleArea(float fWidth, float fHeight)
{
    
   float rArea = 0.0;
 
  rArea = fWidth * fHeight;
  return rArea;
}

int main()
{ 
  float fValue1 = 0.0, fValue2 = 0.0;
  double rRet = 0.0;

  printf("Enter a width");
  scanf("%f",&fValue1);

  printf("Enter a Height");
  scanf("%f",&fValue2);


  rRet =RectangleArea(fValue1,fValue2);

  printf("Area of rectangle is :%lf",rRet);
 
 return 0;
}