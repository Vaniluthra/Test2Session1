#include <stdio.h>

void input(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter 1st: ");
  scanf("%f%f",x1,y1);
  printf("Enter 2nd: ");
  scanf("%f%f",x2,y2);
  printf("Enter 3rd: ");
  scanf("%f%f",x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  int is,area;
  area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
  if (area==0)
    
    is=0;
  else
    is=1;
  return is;
}

void output(int is)
{
  if(is==0)
    printf("the 3 points does not form a triangle");
  else 
    printf("the 3 points form a triangle");
}

int main()
{
  float x1,y1,x2,y2,x3,y3;
  int is;
  input(&x1,&y1,&x2,&y2,&x3,&y3);
  ist=is_triangle(x1,y1,x2,y2,x3,y3);
  output(ist);
  return 0;
}