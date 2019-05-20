#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Menu()
{
	printf("--------------------\n");
	printf("-----  1.play  -----\n");
	printf("-----  0.exit  -----\n");
	printf("--------------------\n");
}
void Game()
{
	int ret = rand() % 100 + 1;//产生1-100的数字
	int num = 0;
	while (1){
		printf("请猜数字：>>");
		scanf("%d", &num);
		if (num > ret){
			printf("猜大了!\n");
		}
		else if (num < ret){
			printf("猜小了!\n");
		}
		else{
			printf("猜对了!\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	int quit = 0;
	srand((unsigned int)time(NULL));//随机数种子  NULL-->初始化指针
	while (!quit){
		Menu();
		scanf("%d", &input);
		switch (input){
		case 1:
			Game();
			break;
		case 0:
			printf("Quit the game!\n");
			quit = 1;
			break;
		default:
			printf("Input error!\n");
			break;
		}
	}
	system("pause");
	return 0;
}
#endif

#if 0
//编写代码，模拟用户登录情景，输入三次密码，输入错误则退出
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i = 0;
	char passward[10] = { 0 };
	for (i = 0; i < 3; i++){
		printf("请输入密码:");
		scanf("%s", passward);
		if (strcmp(passward, "123456") == 0){
			printf("登录成功\n");
			break;
		}
		else{
			printf("输入错误，请重新输入!\n");
		}
	}
		if (i == 3){
			printf("登录失败，退出程序！\n");
		}
	system("pause");
	return 0;
}

#endif

#if 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
void Fun1(char arr1[], char arr2[], int left, int right);
int main()
{
	char arr1[] = "attitude to life!";
	char arr2[] = "#################";
	int left = 0;
	int right = strlen(arr1)-1;
	//int right = sizeof(arr1) / sizeof(arr1[0]) -2;
	Fun1(arr1, arr2, left, right);
	system("pause");
	return 0;
}
void Fun1(char arr1[], char arr2[], int left, int right)
{
	while (left <= right){	
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//暂停
		system("cls");//清屏
		left++;
		right--;
	}
}

#endif



#if 0
int binarry_search(int arr[], int left, int right, int n)
{
	int mid = 0;
	while (left <= right){
		mid = left + (right - left) / 2;
		if (arr[mid] > n){
			right = mid - 1;
		}
		else if (arr[mid] < n){
			left = mid + 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int n = 0;
	scanf("%d", &n);
	int ret = binarry_search(arr, left, right, n);
	if (ret!= -1){
		printf("找到了\n");
	}
	else{
		printf("找不到\n");
	}


	//int n = 0;
	//int ret = 1;
	//int j = 0;
	//int sum = 0;
	//scanf("%d", &n);
	//for (j = 1; j <= n; j++){//优化后
	//	ret *= j;
	//	sum += ret;
	//}
	//for (j = 1; j <= n; j++){
	//	ret = 1;//ret每次初始化为1，否则每次循环时都会用ret原先的值，导致结果错误
	//	for (int i = 1; i <= j; i++){
	//		ret *= i;
	//	}
	//	sum += ret;
	//}
	//printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
#endif




#if 0
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <tchar.h>
float f(float x, float y, float z) {
	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}

float h(float x, float z) {
	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
	if (f(x, y, z) <= 0.0f)
		return y;
	return 0.0f;
}

int main() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0C);
	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
	_TCHAR buffer[25][80] = { _T(' ') };
	_TCHAR ramp[] = _T(".:-=+*#%@");
	int count = 0;
	int count1 = 0;
	//system("color F4");
	for (float t = 0.0f;; t += 0.1f) {
		int sy = 0;
		float s = sinf(t);
		float a = s * s * s * s * 0.2f;

		for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
			_TCHAR* p = &buffer[sy++][0];
			float tz = z * (1.2f - a);
			for (float x = -1.5f; x < 1.5f; x += 0.05f) {
				float tx = x * (1.2f + a);
				float v = f(tx, 0.0f, tz);
				if (v <= 0.0f) {
					float y0 = h(tx, tz);
					float ny = 0.01f;
					float nx = h(tx + ny, tz) - y0;
					float nz = h(tx, tz + ny) - y0;
					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
					*p++ = ramp[(int)(d * 5.0f)];
				}
				else
					*p++ = ' ';
			}
		}

		for (sy = 0; sy < 25; sy++) {
			COORD coord = { 0, sy };
			SetConsoleCursorPosition(o, coord);
			WriteConsole(o, buffer[sy], 79, NULL, 0);
		}
		if (count <= 10){
			printf("I Love You ———.Mua~\n");
			printf("             ");
			count++;
		}
		else{
			printf("You Are My Best Lover.\n");
			printf("              ");
			count++;
			if (count >= 20){
				count = 0;
			}
		}
		Sleep(33);
	}
}
#endif