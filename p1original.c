#include <stdio.h>
#include <math.h>
//gcc -g p1original.c -lm
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter: ");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}

void find_distance(float x1, float y1, float x2, float y2, float *area)
{
  *area=sqrt((x2-x1)*(x2-x1)-(y2-y1)*(y2-y1));
}
void output(float area)
{
  printf("Area: %f\n",area);
}

int main()
{
  float x1,y1,x2,y2,area;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(area);
  return 0;
}
