#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[] = { -1,-2,-3,-4,-5,-6,-9,-87,-455 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i <= sz; i++)
	{
		if(max<arr[i])
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}