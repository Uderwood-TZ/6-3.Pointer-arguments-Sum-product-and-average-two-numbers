#include <stdio.h>

void fun(int x, int y, int *p, int *q, float  *s) ;
int main()
{
 int x,y,sum,product; float aver;
  scanf("%d%d", &x, &y);  
  fun (x ,y, &sum,&product,&aver );
  printf("%d,%d,%.1f", sum,product,aver);
  return 0;
}

/* ����������д�� */
void fun(int x, int y, int *p, int *q,float *s)
{
    *p=x+y;
    *q=x*y;
    *s=(x+y)/2.0;
    return;
}