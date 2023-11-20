#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 2;
//	for (i = 1; i <101; i++)
//	{
//		do {
//			if (0 == i % j)
//			{
//				printf("%dÎªËØÊý\n", i);
//				j++;
//				break;
//			}
//			else {
//				printf("%dÎªÖÊÊý\n", i);
//				j++;
//				break;
//			}		
//		} while (j < i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int sum = 1;
//	int total = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		sum = sum * i;
//		total += sum;
//	}
//	printf("%d\n", total);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (c > a)
//		{
//			printf("%d\n", c);
//		}
//		else{
//			printf("%d\n", a);
//		}
//	}
//	else{
//		printf("%d\n", b);
//	}
//	return 0;
//}
int Diagnose(int arr[],int i)
//{
//	//int left = 0;
//	////int right = sizeof(arr) / sizeof(arr[0]);错误原因，求出的数组个数没有减一，因为数组下标从0开始
//	//int right = (sizeof(arr) / sizeof(arr[0]))-1;
//	////int mid = (left + right) / 2;此语句应在循环内部
//	//int mid = 0;
//	//while (left<=right)//判断条件应为左右下标，而不是需要判断的数是否和arr[mid]相等
//	//{
//	//	mid = (left + right) / 2;
//	//	if (i < arr[mid])//在条件后只改变左右下标就可以了，不用修改mid的值
//	//	{
//	//		right = mid - 1;//判断数在中间数的左边
//	//	}
//	//	else if(i>arr[mid])
//	//	{
//	//		left = mid + 1;//判断数在中间数的右边
//	//	}
//	//	else
//	//	{
//	//		return mid;
//	//		//printf("找到了，数组下标为%d:", mid);
//	//		break;
//	//	}
//	//} 
//	//if (left > right)
//	//{
//	//	return 0;
//	//}
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < i)
//		{
//			left = mid - 1;
//		}
//		else if (arr[mid] > i)
//		{
//			right = mid + 1;
//		}
//		else {
//			return mid;
//			break;
//		}
//	}
//	if (left > right)
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
//	/*
//	* 函数方法有问题，未调试完成
//	int ret = Diagnose(arr, i);
//	if (ret!=0)
//	{
//		printf("找到了，数组下标为:%d", ret);
//	}
//	else {
//		printf("数组中不存在您要查找的数\n");
//	}
//	printf("%d\n", ret);
//	*/
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < i)
//		{
//			left = mid - 1;
//		}
//		else if (arr[mid] > i)
//		{
//			right = mid + 1;
//		}
//		else {
//			printf("成功查找，数组下标为：%d",mid);
//			printf("\n");
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("查找失败，数组中并未包含此数\n");
//	}
//	return 0;
//}
