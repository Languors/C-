//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。
/*
思路：
 0. 函数原型设计
 返回值：必须要有返回值，0表示不是素数，1表示是素数
 1. 检测该数据是否为素数，方法参考下文
 素数的核心特征：
 a.范围限定：必须是大于 1 的自然数，1 本身不是素数。
 b.整除性：只能被 1 和它自己两个数整除，没有其他正因数。
 c.量无限：素数的个数是无穷的，不存在最大的素数。

*/
#include<stdio.h>
#include<math.h>
int is_prime(int N)
{
	int k = 0;
	for (k = 1; k <= sqrt(N); k++)
	{
		if (N % k == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
int main()
{
	int n = 0;
	for (n = 100; n <= 200; n++)
	{
		if(is_prime(n) ==1 )
		{
			printf("%d ", n);
		}
	}
	return 0;
}