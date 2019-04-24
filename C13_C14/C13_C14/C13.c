//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int Find(const int a[][3], int k)
//{
//	int i = 0;
//	int j = 2;
//	if (k < a[0][0] || k > a[3][3]){
//		return 0;
//	}
//	while (i<3 && j>=0){
//		if (k > a[i][j]){
//			i++;
//		}
//		else if (k < a[i][j]){
//			j--;
//		}
//		else{
//			return k;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 0;
//	int ret = 0;
//	scanf("%d", &k);
//	ret = Find(a, k);
//	if (ret){
//		printf("Find the number!\n");
//	}
//	else
//	{
//		printf("Not find the number!\n");
//	}
//	system("pause");
//	return 0;
//}


//调整数组使奇数全部都位于偶数前面。 
//#include<stdio.h>
//#include<stdlib.h>
//void Adjust(int *arr, int len)
//{
//	int *left = arr;
//	int *right = arr+len-1;
//	while (left < right)
//	{
//		while (*left % 2 == 1){
//			left++;
//		}
//		while (*right % 2 == 0){
//			right--;
//		}
//		if (left < right){
//			int tmp = 0;
//			tmp = *right;
//			*right = *left;
//			*left = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("请输入数组元素:");
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Adjust(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}





