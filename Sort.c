#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

#include <stdio.h>
#include <stdlib.h>

// ��������
void InsertSort(int* a, int n)
{
	// [0,end]���򣬰�end+1λ�õĲ��뵽ǰ��
	// ���� [0,end+1]����
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		// �� end �ĺ�һ����ǰ����
		int temp = a[end + 1];
		while (end >= 0)
		{
			// ����
			if (temp < a[end])
			{
				// ���Ų��
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
	printf("��������Ҫ��������� ��-1������> \n");
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