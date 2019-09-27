#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*给你一个长度固定的整数数组 arr，请你将该数组中出现的每个零都复写一遍，
并将其余的元素向右平移。注意：请不要在超过该数组长度的位置写入元素。
void duplicateZeros(int* arr, int arrSize)
{
	int i = 0;
	int j = arrSize - 1;
	while (i<arrSize)
	{
		if (arr[i] == 0 && i + 1<arrSize)
		{
			j = arrSize - 1;
			while (j - 1>i)
			{
				arr[j] = arr[j - 1];
				j--;
			}
			arr[i + 1] = 0;
			i += 2;
		}
		else
		{
			i++;
		}
	}
	for (i = 0; i < arrSize; i++)
	{
		printf("%d ", arr[i]);
	}

}
int main()
{
	int arr[] = { 0,0,0,0,0};
	//int arr[] = { 1, 0, 2, 3, 0, 4, 5, 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	duplicateZeros(arr,len);
	return 0;
}
*/

/*我们称一个数 X 为好数, 如果它的每位数字逐个地被旋转 180 度后，
我们仍可以得到一个有效的，且和 X 不同的数。要求每位数字都要被旋转。
如果一个数的每位数字被旋转以后仍然还是一个数字， 
则这个数是有效的。0, 1, 和 8 被旋转后仍然是它们自己；2 和 5 可以互相旋转成对方；
6 和 9 同理，除了这些以外其他的数字旋转以后都不再是有效的数字。
现在我们有一个正整数 N, 计算从 1 到 N 中有多少个数 X 是好数？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotated-digits
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
int rotatedDigits(int N)
{
	int count = 0;
	int i = 0;
	int tmp = 0;
	int j = 0;
	int flag = 0;
	for (i = 1; i <= N; i++)
	{
		flag = 0;
		tmp = i;
		while (tmp)
		{
			j = tmp % 10;
			if ((j == 2) || (j == 5) || (j == 6) || (j == 9))
			{
				flag = 1;
			}
			if ((j == 3) || (j == 4) || (j == 7))
			{
				break;
			}
			tmp /= 10;
			if (tmp == 0 && flag == 1)
			{
				count++;
			}
		}
	}
	return count;
}


int main()
{
	int ret=rotatedDigits(30);
	printf("%d\n", ret);
	return 0;
}
