# 6-3.Pointer-arguments-Sum-product-and-average-two-numbers
本题求两整数的和、积、平均值。要求用原型是  void fun(int x, int y, int *p, int *q,float *s)  的函数来实现。

函数接口定义：

void fun(int x, int y, int *p, int *q,float *s) ;

其中x和y是需要计算的两个数，p、 q、s指向的变量保存计算结果。

裁判测试程序样例：

在这里给出函数被调用进行测试的例子。例如：
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

/* 请在这里填写答案 */

输入样例：

31 2

输出样例：

33,62,16.5

代码长度限制

16 KB

时间限制

400 ms

内存限制

64 MB
