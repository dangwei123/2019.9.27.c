#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
/*给定一个整数，写一个函数来判断它是否是 3 的幂次方
int isPowerOfThree1(int n)
{
	if (n > 0 && ((int)pow((double)3, (double)19)) % n == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
void isPowerOfThree2(int n)
{
	int tmp = 1;
	while (tmp <= n)
	{
		if (tmp == n)
		{
			break;
		}
		tmp *= 3;
	}
	if (tmp == n)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
}
int main()
{
	int ret = isPowerOfThree1(45);
	if (ret)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	isPowerOfThree2(27);
	return 0;
}
*/

/*给定一个整数 (32 位有符号整数)，请编写一个函数来判断它是否是 4 的幂次方*/
int isPowerOfFour(int num)
{
	int tmp = 1;
	if (num == 0)
	{
		return 0;
	}
	while (num % 4 == 0)
	{
		num /= 4;
		if (num == 1)
		{
			break;
		}
	}
	if (num == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int ret = isPowerOfFour(20);
	if (ret)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	return 0;
}