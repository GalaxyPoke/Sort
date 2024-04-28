#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

#include <stdio.h>
#include <stdlib.h>

// 插入排序
void InsertSort(int* a, int n)
{
	// [0,end]有序，把end+1位置的插入到前序
	// 控制 [0,end+1]有序
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		// 把 end 的后一个往前插入
		int temp = a[end + 1];
		while (end >= 0)
		{
			// 升序
			if (temp < a[end])
			{
				// 向后挪动
				a[end + 1] = a[end];
			}
			else
			{
				break;
			}
			end--;
		}
		a[end + 1] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}


int main()
{
	int a[100];
	int sum;
	int j = 0;
	printf("请输入你要排序的数据 以-1结束：> \n");
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &sum);
		if (sum == -1)
		{
			break;
		}
		a[j++] = sum;
	}
	InsertSort(a, j);
	return 0;

}