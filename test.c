#include<stdio.h>
//求工资
//int main(){
//	int age=;
//	char rank;
//	printf("输入工龄：");
//	scanf("%d", &age);
//	getchar();
//	printf("输入职工级别：");
//	scanf("%c", &rank);
//	//基本工资
//	int foundment;
//	if (age >= 20)
//		foundment = 1800;
//	else
//		foundment = 800 + (age / 3) * 100;
//	//奖金
//	float prize;
//	switch (rank) {
//	case'A':
//		prize = foundment * 0.45;
//		break;
//	case'B':
//		prize = foundment * 0.35;
//		break;
//	case'C':
//		prize = foundment * 0.25;
//		break;
//	case'D':
//		prize = foundment * 0.15;
//		break;
//	case'E':
//		prize = foundment * 0;
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	float salary;
//	salary = foundment + prize;
//	printf("实发工资=%f", salary);
//	
//	return 0;
//}
 
//输出生日
//int main() {
//	int year, month, day;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%2d\nmonth=%02d\nday=%02d", year, month, day);
//	return 0;
//}

//转义字符的使用
//int main() {
//	float salary;
//	printf("\asalary:");
//	printf("$_______\b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f is ok", salary);
//	printf("\rGee!\n");
//	return 0;
//} 

//求最大值
//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	while (i < 10) {
//		scanf("%d", &arr[i]);
//		i++;
//
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 10) {
//		if (arr[i] > max)
//			max = arr[i];
//			i++;
//
//	}
//	printf("%d", max);
//	return 0;
//}

//求球的体积
//int main() {
//	float r = 0.0f;
//	scanf("%f", &r);
//	float v = 0.0f;
//	v = 4.0/3 * 3.1415926 * r * r * r;
//	printf("%.2f", v);
//
//	return 0;
//
//}

//规范 
//int a = 0;
//float b = 0.0f;
//double c = 0.0;

//可重复
//斐波那契数列
//int main() {
//	int a = 0, b = 1, c = 0,i = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++) {
//		printf("%d ", b);
//
//		b += c;
//		c = b - c;
//		
//	}
//
//	
//	return 0;
// }

//斐波那契数列求和
//int main() {
//	int a = 0, b = 1, c = 0,i = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++) {
//		sum = sum + b;
//		b += c;
//		c = b - c;
//		
//	}
//	printf("%d", sum);
//	
//	return 0;
// }

//1!+2!+3!+....+10!
//int main() {
//
//
//	int i = 0;
//	int ret = 1;
//	int a = 0;
//	int sum = 0;
//	for (a = 1; a <= 10; a++) {
//		int ret = 1;//很重要
//		for (i = 1; i <= a; i++) {
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
// 可重复
//int main() {
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++) {
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//可重复练习
////查找有序数组中的数字（二分查找）
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == k) {
//
//			printf("下标为%d", mid);
//			break;
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	if (left > right)
//		printf("wu");
//	return 0;
//}

////逐步浮现
//#include <windows.h>
//#include<stdlib.h>
//int main() {
//	char arr1[] = { "welcome to here!!!!" };
//	char arr2[] = { "###################" };
//	int left = 0, right = 0;
//	right = strlen(arr1) - 1;
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//#include <windows.h>
//		//清空屏幕
//		system("cls");//#include<stdlib.h>//不过vs没有也能用
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//电脑产生随机数（1--100)
//你来猜
//猜大/小了
//猜对结束
//#include <stdlib.h>
//#include <time.h>
//void menu() {
//	printf("############################################\n");
//	printf("############################################\n");
//	printf("############################################\n");
//	printf("###################1.play###################\n");
//	printf("############################################\n");
//	printf("###################0.exit###################\n");
//	printf("############################################\n");
//	printf("############################################\n");
//	printf("############################################\n");
//}
//void game() {
//	int ret = 0;
//	ret = rand() % 100 + 1;//生成1到100的随机数
//	//printf("%d\n", ret);
//	int guess = 0;
//	int ci = 0;
//	//猜数字
//	while (1) {
//		printf("请输入数字____\b\b\b\b");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("猜大了\n");
//			ci++;
//		}
//		else if (guess < ret) {
//			printf("猜小了\n");
//			ci++;
//		}
//		else {
//			printf("猜对了\n");
//			printf("猜测次数为%d\n", ci+1);
//			break;
//		}
//			
//	}
//
//}
//int main() {
//	int i = 0;
//	srand((unsigned int)time(NULL));//给随机数来个开始
//	do {
//		menu();
//		printf("请选择____\b\b\b\b");
//		scanf("%d", &i);
//		switch (i) {
//		case 1:
//			printf("进入游戏\n");
//			game();
//			goto end;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，重新输入\n");
//			break;
//
//
//		}
//		
//	} while (i);
//end:
//	printf("游戏结束\n");
//	
//	return 0;
//}

////关机小程序
//#include <string.h>
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 360");
//	again:
//	printf("60秒后关机，输入“我是猪” 即可取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0) {
//		system("shutdown -a");
//
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}
//

//写出100到200的所有素数
//#include <math.h>
//int sushu(int n) {
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++) {
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i += 2) {//偶数一定不是素数，所以跳过偶数
//		if (sushu(i)) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//给数组中的数计数
//void cmp(int i,int n,int arr1[],int arr2[],int j) {
//	int x = 0;
//	for (i = 0; i < n; i++) {
//		if (arr1[i] == arr2[j])
//			x++;
//	}
//	//输出
//	printf("%d\n", x);
//}
//int main() {
//	//输数据进数组a
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int arr1[10000] = { 0 };
//	int arr2[10000] = { 0 };
//	 int max = arr1[0];
//	scanf("%d",&n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr1[i]);
//	}
//	//找到数组a中最大的数M
//
//	for (i = 0; i < n; i++) {
//		if (arr1[i] > max)
//			max = arr1[i];
//	}
//	//printf("%d", max);
//	//新数组b 0~M
//	for (i = 0, j = 0; j <= max; i++, j++) {
//		arr2[i] = j;
//	}
//	//a 数组数与b数组比较相同的次数就加一
//	for (j = 0; j <= max; j++) {
//		cmp(i, n, arr1, arr2, j);//比较函数
//	}
//	return 0;
//}

//测试continue
int main()
{
   int i = 1;
   while (i <= 10)
   {
	   if (5 == i)
		   continue;
	   ++i;
	   printf("%d ",i);
   }
return 0;

}

//交换两个变量的内容
//void swap(int* px, int* py) {//形参是实参的一份临时拷贝 修改形参不能修改实参 因此只能传实参的地址
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main() {
//	int a = 100;
//	int b = 200;
//	swap(&a,&b);
//	printf("%d,%d", a, b);
//	return 0;
//}

////打印10行杨辉三角
////1
////1 1
////1 2 1
////1 3 3 1
////1 4 6 4 1
//int main() {
//	int arr[10][10] = { 0 };
//	int i = 0,j = 0;
//	for (i = 0; i <= 9; i++) {
//		arr[i][0] = 1;
//	}
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= 9; j++) {
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i <= 9; i++) {
//		for (j = 0; j <= 9; j++) {
//			if(arr[i][j] == 0)
//			    printf(" ");
//			else
//				printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//顺序打印正整数的每一位
//void p(int x) {
//	if (x > 9)
//		p(x/10);
//	printf("%d ", x % 10);
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	p(n);
//	return 0;
//}

//测试求数组长度的函数
//int main() {
//	char arr[20] = { 'a','b','\32','c'};
//	char arr1[4] = { 'a','b','\32','c' };
//	char arr2[20] = { 'a','b','\32','c','\0'};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	int i = strlen(arr);
//	printf("%d\n", i);
//	i = strlen(arr1);
//	printf("%d\n", i);
//	 i = strlen(arr2);
//	printf("%d\n", i);
//	return 0;
//}

//作业 用函数解决将两个数组的数归并到一起并按顺序打印
//void sort(int arr3[])
//{
//    int i, j, temp;
//    for(i = 9; i >= 0; i--)
//    {
//        for (j = 0; j < i; j++)
//        {
//            if (arr3[j] > arr3[j + 1])
//            {
//                temp = arr3[j];
//                arr3[j] = arr3[j + 1];
//                arr3[j + 1] = temp;
//            }
//        }
//    }
//}
//int main()
//{
//    //输入
//    int arr1[5] = { 0 };
//    int arr2[5] = { 0 };
//    int arr3[10] = { 0 };
//    int i = 0;
//    printf("输入第一组数（5个）");
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    printf("输入第二组数（5个）");
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //归并到第三个数组
//    for (i = 0; i < 5; i++)
//    {
//        arr3[i] = arr1[i];
//        arr3[i + 5] = arr2[i];
//    }
//    //for (i = 0; i < 10; i++)//检查
//    //{
//    //    printf("%d ", arr3[i]);
//    //}
//    //排序
//    sort(arr3);
//    printf("归并后的数组 ");
//    for (i = 0; i < 10; i++)//
//   {
//       
//       printf("%d ", arr3[i]);
//   }
//    return 0;
//}

////数组名确实能表示首元素的地址
////但是有2个例外：
////1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
////2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//    int arr[10] = { 0 };
//    printf("%p\n", arr); //arr就是首元素的地址
//    printf("%p\n", arr + 1);
//    printf("------------------------------------------\n");
//    printf("%p\n", &arr[0]); //首元素的地址
//    printf("%p\n", &arr[0] + 1);
//    printf("------------------------------------------\n");
//    printf("%p\n", &arr); //数组的地址
//    printf("%p\n", &arr + 1);
//    return 0;
//}

//将原有字符串逆序
#include<string.h>
void re(char* str) {
	char temp = 0;
	int len = strlen(str);
	temp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (len > 1)
		re(str + 1);
	*(str + len - 1) = temp;
}
int main() {
	char arr[] = { "asdfghj" };
	re(arr);
	printf("%s", arr);
	return 0;
}

////移位/位操作符
//int main() {
//	//左移操作符<<   左边丢弃，右边补零
//	int a = 7;
//	//00000000000000000000000000000111 -补码
//	int b = a << 1;
//	//00000000000000000000000000001110
//	printf("%d\n", b);
//	//a -7   
//	//10000000000000000000000000000111-原码
//	//11111111111111111111111111111000-反码
//	//11111111111111111111111111111001-补码
//	//   <<    
//	//11111111111111111111111111110010-补码
//	//10000000000000000000000000001110-原码  -14
//	a = -7;
//	b = a >> 1;//右移 分 算数右移与逻辑右移  算数是右边丢弃，左边补原符号位      逻辑是右边丢弃，左边补零
//	printf("%d\n", b);
//	//& 有0为0 无0为一
//	a = 3;
//	b = -5;
//	int c = a & b;
//	//11111111111111111111111111111011- -5补码
//	//00000000000000000000000000000011-3补码
//	//00000000000000000000000000000011-c
//	printf("%d\n", c);
//
//	c = a | b;
//	//|有1为1 无1为0
//	//11111111111111111111111111111011-补码
//	//10000000000000000000000000000101-原码
//	printf("%d\n", c);
//
//	c = a ^ b;
//	//^同为0 异为1
//	//11111111111111111111111111111000-补码
//	//10000000000000000000000000001000-原码
//	printf("%d\n", c);
//
//	//a^a = 0;
//	//0^a = a;
//	//3^5^3 = 3^3^5//支持交换律
//
//	//~ 取反
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//	return 0;
//}

//应用
//int main() {
//	int a = 13;
//	//00000000000000000000000000001101
//	//把倒数第二 (n)位变为1
//	//可以|
//	//00000000000000000000000000000010
//	//可理解为1<<1 (n-1)
//	a |= (1 << 1);
//	printf("%d\n", a);
//
//	a = 29;
//	//00000000000000000000000000011101
//	//把倒数第5 (n)位变为0
//	//可以&
//	//11111111111111111111111111101111
//	//可由00000000000000000000000000010000 ~得到
//	//可理解为1<<4 (n-1)
//	a &= (~(1 << 4));
//	printf("%d\n", a);
//	return 0;
//}
////&& 左边为假，右边就不计算了
////|| 左边为真，右边就不计算了

////另类空指针
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = test();
//	printf("hehe\n");
//	if (p != NULL) {
//		printf("%d", *p);
//	}
//	return 0;
//}

//int arr[5] 整型数组 
//int *parr[10] 指针数组
//int (*parr2)[10] 数组指针 
//int (*parr3[10])[5] 数组指针的数组 
// 
//数组传参 
//int arr[10]  
//test(arr)
//test(int arr[10] / int arr[] / int *arr )
//
//int *arr1[10]
//test(arr1)
//test(int *arr1[10] / int **arr1)
//
//int arr[3][5]
//test(arr)
//test(int arr[3][5] / int arr[][5] / int (*arr)[5]

////排序五个字符串
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char arr[5][100] = { 0 };
//	char (*arr2[100])[5];
//	int i = 0;
//	int j = 0;
//	char (*temp)[100];
//	for (i = 0; i < 5; i++) {
//		arr2[i] = &arr[i];
//	}
//	for (i = 0; i < 5; i++) {
//		printf("请输入第%d个字符串：",i+1);
//		scanf("%s", arr2[i]);
//		printf("\n");
//	}
//	for (i = 0; i < 5-1; i++) {
//		for (j = 0; j < 5 - 1 - i; j++) {
//			if (strcmp(*arr2[j], *arr2[j + 1]) > 0) {
//				temp = arr2[j + 1];
//				arr2[j + 1] = arr2[j];
//				arr2[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%s\n", *arr2[i]);
//	}
//	return 0;
//}

////数字的二进制中几个1
//int count_bits_2(int n) {
//    int count = 0;
//    while (n) {
//        n &= (n - 1);
//        count++;
//    }
//    return count;
//}
//int main() {
//    int n = 0;
//    scanf("%d",&n);
//    int x = count_bits_2(n);
//    printf("%d", x);
//    return 0;
//}

//交换变量 但不添加新变量
//int main() {
//	int a = 1;
//	int b = 2;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d,%d", a, b);
//	return 0;
//}

//归并两数组改进版
//#include <stdio.h>
//#define SIZE 5
//
//void bubbleSort(int arr[], int size)
//{
//    int i, j, temp;
//    for (i = size - 1; i >= 0; i--)
//    {
//        for (j = 0; j < i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int arr1[SIZE] = { 0 };
//    int arr2[SIZE] = { 0 };
//    int arr3[2 * SIZE] = { 0 };
//    int i = 0;
//    // 输入第一个数组
//    printf("请输入第一组数（%d个整数）：", SIZE);
//    for (i = 0; i < SIZE; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    // 输入第二个数组
//    printf("请输入第二组数（%d个整数）：", SIZE);
//    for (i = 0; i < SIZE; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    for (i = 0; i < SIZE; i++)
//    {
//        arr3[i] = arr1[i];
//        arr3[i + SIZE] = arr2[i];
//    }
//    // 排序
//    bubbleSort(arr3, 2 * SIZE);
//    printf("归并排序后的数组：");
//    for (i = 0; i < 2 * SIZE; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    printf("\n");
//    return 0;
//}

//图书管理系统 增添改查 还有展示 数组有点大 gets也不严谨 用起来有些警告 不过以我的知识目前没什么好的解决办法 
//由这次编程产生的感悟 有些逻辑错误你细心一下就能发现 不要心急
//#include <stdio.h>
//#include<string.h>
//
//#define MAX_BOOK 1000//图书馆中图书最大数量
//#define MAX_TITLE 100//图书书名最长长度
//#define MAX_AUTHOR 80//图书作者名最长长度
//#define MAX_PUBLISHER 80//图书出版社名最长长度
//
//typedef struct Book {
//	char title[MAX_TITLE];
//	char author[MAX_AUTHOR];
//	char publisher[MAX_PUBLISHER];
//	int isbn;
//} Book;
//
////清除缓冲区
//void clear_input_buffer();
////添加图书
//void add_book(Book library[MAX_BOOK], int* books);
////按书名找书
//void search_book_title(Book library[MAX_BOOK], int* books);
////按ISBN找书
//void search_book_ISBN(Book library[MAX_BOOK], int* books);
////删除图书
//void delete_book(Book library[MAX_BOOK], int* books);
////展示图书
//void display_book(Book library[MAX_BOOK], int* books);
//
//void menu() {
//	printf("社区阅览室图书管理系统\n");
//	printf("    1.添加图书        \n");
//	printf("    2.按书名查询图书  \n");
//	printf("    3.按ISBN查询图书  \n");
//	printf("    4.删除图书        \n");
//	printf("    5.显示所有图书    \n");
//	printf("    0.退出系统        \n");
//	printf("请选择____\b\b\b\b");
//}
//
//
//int main() {
//	int input = 0;
//	//初始化图书馆
//	Book library[MAX_BOOK] = { 0 };
//	int books = 0;
//	int* p = &books;
//	do {
//		menu();
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			clear_input_buffer();
//			add_book(library, p);
//			break;
//		case 2:
//			clear_input_buffer();
//			search_book_title(library, p);
//			break;
//		case 3:
//			clear_input_buffer();
//			search_book_ISBN(library, p);
//			break;
//		case 4:
//			clear_input_buffer();
//			delete_book(library, p);
//			break;
//		case 5:
//			clear_input_buffer();
//			display_book(library, p);
//			break;
//		case 0:
//			printf("退出系统\n");
//			break;
//		default:
//			printf("无效选择，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//
////逻辑功能实现函数
//void clear_input_buffer() {
//	int c;
//	while ((c = getchar()) != '\n' && c != EOF);
//}
//
//void add_book(Book library[MAX_BOOK], int* books) {
//	if ((*books) >= MAX_BOOK) {
//		printf("图书馆已满，无法继续添加新图书\n");
//		return;
//	}
//	Book newbook = { 0,0,0,0 };
//	printf("请输入书名: ");
//	gets(newbook.title);
//	printf("请输入作者: ");
//	gets(newbook.author);
//	printf("请输入出版社: ");
//	gets(newbook.publisher);
//	printf("请输入ISBN: ");
//	scanf("%d", &newbook.isbn);
//	library[*books] = newbook;
//	(*books)++;
//	printf("完成\n");
//	clear_input_buffer();
//	printf("按回车继续");
//	clear_input_buffer();
//}
//
//void search_book_title(Book library[MAX_BOOK], int* books) {
//	if ((*books) == 0) {
//		printf("图书馆中没有图书！\n");
//		clear_input_buffer();
//		printf("按回车继续");
//		clear_input_buffer();
//		return;
//	}
//	char bookname[MAX_TITLE] = { 0 };
//	int i = 0;
//	int find = 1;
//	printf("请输入要查询的书名: ");
//	gets(bookname);
//	for (i = 0; i < (*books); i++) {
//		if (strcmp(bookname, library[i].title) == 0) {
//			printf("找到图书：\n");
//			printf("书名: %s\n", library[i].title);
//			printf("作者: %s\n", library[i].author);
//			printf("出版社: %s\n", library[i].publisher);
//			printf("ISBN: %d\n", library[i].isbn);
//			find = 0;
//		}
//	}
//	if (find != 0)
//		printf("未找到包含名为 %s 的图书。\n", bookname);
//	clear_input_buffer();
//	printf("按回车继续");
//	clear_input_buffer();
//}
//
//void search_book_ISBN(Book library[MAX_BOOK], int* books) {
//	if ((*books) == 0) {
//		printf("图书馆中没有图书！\n");
//		clear_input_buffer();
//		printf("按回车继续");
//		clear_input_buffer();
//		return;
//	}
//	int bookISBN = 0;
//	int i = 0;
//	int find = 1;
//	printf("请输入要查询的书籍的ISBN: ");
//	scanf("%d", &bookISBN);
//	for (i = 0; i < (*books); i++) {
//		if (bookISBN == library[i].isbn) {
//			printf("找到图书：\n");
//			printf("书名: %s\n", library[i].title);
//			printf("作者: %s\n", library[i].author);
//			printf("出版社: %s\n", library[i].publisher);
//			printf("ISBN: %d\n", library[i].isbn);
//			find = 0;
//		}
//	}
//	if (find != 0)
//		printf("未找到ISBN为 %d 的图书。\n", bookISBN);
//	clear_input_buffer();
//	printf("按回车继续");
//	clear_input_buffer();
//}
//
//void delete_book(Book library[MAX_BOOK], int* books) {
//	if ((*books) == 0) {
//		printf("图书馆中没有图书！无法删除\n");
//		clear_input_buffer();
//		printf("按回车继续");
//		clear_input_buffer();
//		return;
//	}
//	int bookISBN = 0;
//	int i = 0;
//	int find = 1;
//	printf("请输入要删除的书籍的ISBN: ");
//	scanf("%d", &bookISBN);
//	for (i = 0; i < (*books); i++) {
//		if (bookISBN == library[i].isbn) {
//			for (; i < (*books) - 1; i++) {
//				library[i] = library[i + 1];
//			}
//			(*books)--;
//			find = 0;
//			printf("图书删除成功！\n");
//			break;
//		}
//	}
//	if (find != 0)
//		printf("未找到ISBN为 %d 的图书。\n", bookISBN);
//	clear_input_buffer();
//	printf("按回车继续");
//	clear_input_buffer();
//}
//
//void display_book(Book library[MAX_BOOK], int* books) {
//	if ((*books) == 0) {
//		printf("图书馆中没有图书！无法删除\n");
//		clear_input_buffer();
//		printf("按回车继续");
//		clear_input_buffer();
//		return;
//	}
//	for (int i = 0; i < (*books); i++) {
//		printf("图书 %d:\n", i + 1);
//		printf("  书名: %s\n", library[i].title);
//		printf("  作者: %s\n", library[i].author);
//		printf("  出版社: %s\n", library[i].publisher);
//		printf("  ISBN: %d\n", library[i].isbn);
//	}
//	clear_input_buffer();
//	printf("按回车继续");
//	clear_input_buffer();
//}

//一些难理解的代码
//#include <stdio.h>
//#include <signal.h>
//
//typedef void(*pft)(int);  // 把void(*)(int)类型重命名为pft
//
//int main()
//{
//    // 修正注释中的表达式
//    // (*(void (*)())0)();  // 这是一个函数调用，将0强制转换为函数指针并调用
//
//    // signal函数的声明（实际上在signal.h中已定义）
//    // void (*signal(int, void(*)(int)))(int);
//
//    // 使用typedef简化signal函数的声明
//    pft signal(int, pft);
//
//    return 0;
//}

//任意类型的数据排序
//#include<stdlib.h>
//
////void qsort(void* base//要比的数据起始位置,size_t num//元素个数,size_t width//数据元素大小 占几字节,int(* cmp)(const void* e1,const void* e2)//函数指针 比较函数
////可排序任意类型
//
//int cmp_int(const void* e1, const void* e2) {
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void swap(char* e1, char* e2, int width) {
//	int i = 0;
//	for (i = 0; i < width; i++) {
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2)) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++) {
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (cmp((char*)base+j*width, (char*)base + (j+1) * width)>0) {
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int); 
//	//设计一个类似的
//	bubble_sort(arr,sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//简单递归
//#include <stdio.h>
//main()
//{
//    char* a = "1234";
//    fun(a);
//    printf("\n");
//}
//
//fun(char* s)
//{
//    char t;
//    if (*s) {
//        t = *s++; fun(s);
//   
//        if (t != '\0') putchar(t); }
//    
//}

//求一个二维数组中每行的最大值和每行的和。
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int a[5][5], b[5], c[5], i, j, k, s;
    srand((unsigned int)time(NULL));
    // 初始化数组
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            a[i][j] = rand() % 100;
    // 处理逻辑
    for(i = 0; i < 5; i++)
    {
        /*****************SPACE*********/
          s = 0;  // 初始化s
          k = a[i][0];
        for(j = 0; j < 5; j++)
        {
            /*****************SPACE*********/
            if(k < a[i][j])
            {
                k = a[i][j];
            }
        s = s + a[i][j];
        } 
        b[i] = k;
        /*****************SPACE*********/
        c[i] = s;
    }
    
    // 打印结果
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            /*****************SPACE*********/
            printf("%5d", a[i][j]);
        }
        printf("%5d%5d", b[i], c[i]);
        printf("\n");
    }
    return 0;
}

//typedef struct student stu;
//typedef struct love {
//    char* p;
//    stu* q;
//    stu* w;
//}love;
//
//typedef struct student {
//    char name[20];
//    int age;
//    love who;
//}stu;
//
//int main() {
//    int i;
//    stu stu[] = {
//        {"高", 18,"爱的是",stu+1,stu+2},
//        {"甄", 18,"爱的是",stu,NULL},
//        {"王", 18,"爱的是",stu,NULL},
//    };
//
//    for (i = 0; i < 3; i++) {
//        if (stu[i].who.w->name != NULL) {
//            printf("%s%s%s和%s\n", stu[i].name, stu[i].who.p, stu[i].who.q->name, stu[i].who.w->name);
//        }
//        else
//            printf("%s%s%s\n", stu[i].name, stu[i].who.p, stu[i].who.q->name);
//    }
//    return 0;
//}

////指针+大小端存储+强制类型转换
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);//指向a的下一数组的首地址
//    int* ptr2 = (int*)((int)a + 1);//  a中元素存储格式为 01 00 00 00     02 00 00 00     03 00 00 00    因此p2指 00 00 00 02 
//    printf("%x,%x\n", ptr1[-1], *ptr2);//0x 00 00 00 04  0x 02 00 00 00 
//    printf("0x%08x,0x%08x\n", ptr1[-1], *ptr2); //看得更清楚
//    return 0;
//}

//#include <assert.h>
//size_t my_strlen(const char* str)
//{
//    size_t count = 0;
//    assert(str);  
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//int main()
//{
//    const char* str1 = "Hello World";
//    printf("字符串 \"%s\" 的长度：%zu\n", str1, my_strlen(str1));
//
//    const char* str2 = "";
//    printf("字符串 \"%s\" 的长度：%zu\n", str2, my_strlen(str2));  
//
//    const char* str3 = "C Programming!";
//    printf("字符串 \"%s\" 的长度：%zu\n", str3, my_strlen(str3)); 
//
//    const char* str4 = "A";
//    printf("字符串 \"%s\" 的长度：%zu\n", str4, my_strlen(str4));  
//    my_strlen(NULL);//错误
//
//    return 0;
//}


//char* my_strcopy(char* dest, const char* src) {
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}//strcopy的模拟实现 返回目标空间的首地址

//#include<string.h>
//int main() {
//	char arr1[20] = { "Hello" };
//	char arr2[] = { "World" };
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}//字符串追加
//
//长度受限的字符串函数
//strncopy
//strncat
//strncmp
//(arr1,arr2,n)

//strstr 查找子串
//模拟实现
//char* my_strstr(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	char* s1 = str1;
//	char* s2 = str2;
//	char* p = str1;
//	while (*p) {
//		s1 = p;
//		s2 = str2;
//		while (s1 != "\0" && s2 != "\0" && *s1 == *s2) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == "\0") {
//			return p;
//		}
//		p++;
//	}
//	return NULL;
//}

////切割字符串
//#include <string.h>
//
//int main()
//{
//    const char* sep = "@.";
//    char email[] = "zhangpengwei@bitejiuyeke.com";
//    char cp[30] = { 0 };
//    strcpy(cp, email);
//
//    char* ret = strtok(cp, sep);
//    printf("%s\n", ret);
//
//    ret = strtok(NULL, sep);
//    printf("%s\n", ret);
//
//    ret = strtok(NULL, sep);
//    printf("%s\n", ret);
//    return 0;
//
//    //或者写循环
//    char* ret = NULL;
//    for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep)) {
//        printf("%s\n", ret);
//    }
//}

////内存函数
////memcpy(arr2,arr1,20)最后为字节数 不用来处理重叠的内存的 比如自己的一部分拷贝自己
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr1 + 2, arr1, 20);
//	return 0;
//}
////涉及内存重叠用memmoveVS用memcpy也可以但其他编译器就不行
//memmove模拟实现 
//当dest在src之前就是从前到后的数据处理 在src之后就是从后往前的数据处理

//void* my_memmove(void* dest, const void* src, int num) {
//	assert(dest && src);
//	void* ret = dest;
//	if (dest > src) {
//		while (num--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else {
//		while (num--) {
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//memcmp类似strcmp

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为 4 个嫌疑犯的一个。
//以下为 4 个嫌疑犯的供词:A 说：不是我。B 说：是 C。C 说：是 D。D 说 : C 在胡说。
//已知 3 个人说了真话，1 个人说的是假话。现在请根据这些信息，写一个程序来确定到底谁是凶手。
//int main()
//{
//    int killer = 0;
//    for (killer = 'a'; killer <= 'd'; killer++)
//    {
//        if ((killer != 'a') + (killer == 'c')
//            + (killer == 'd') + (killer != 'd') == 3)
//        {
//            printf("%c\n", killer);
//        }
//    }
//
//    return 0;
//}

////有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//struct Point//为了返回找到的坐标
//{
//    int x;
//    int y;
//};
//
//struct Point find_num(int arr[3][3], int r, int c, int k)
//{
//    int x = 0;
//    int y = c - 1;
//    struct Point p = { -1, -1 };
//    while (x <= r - 1 && y >= 0)
//    {
//        if (k < arr[x][y])
//        {
//            y--;
//        }
//        else if (k > arr[x][y])
//        {
//            x++;
//        }
//        else
//        {
//            p.x = x;
//            p.y = y;
//            return p;
//        }
//    }
//    return p;
//}
//int main()
//{
//    int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//    int k = 0;
//    scanf("%d", &k);
//    struct Point ret = find_num(arr, 3, 3, k);
//    printf("%d %d\n", ret.x, ret.y);
//    return 0;
//}

////第二种
//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//    int x = 0;
//    int y = *py - 1;
//    while (x <= *px - 1 && y >= 0)
//    {
//        if (k < arr[x][y])
//        {
//            y--;
//        }
//        else if (k > arr[x][y])
//        {
//            x++;
//        }
//        else
//        {
//            *px = x;
//            *py = y;
//            return 1;
//        }
//    }
//    *px = -1;
//    *py = -1;
//    return 0;//找不到
//}
//
//int main()
//{
//    int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//    int k = 0;
//    scanf("%d", &k);
//    int x = 3;
//    int y = 3;
//    int ret = find_num(arr, &x, &y, k);
//    printf("%d\n", ret);
//    //再次调用则应重新设定x,y
//    return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//    // 动态内存开辟
//    int* p = (int*)malloc(40);
//    if (p == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//
//    // 使用动态分配的内存
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        *(p + i) = i;  // 指针偏移方式赋值
//    }
//
//    // 打印内存中的数据
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//    //扩容
//    int* ptr = (int*)realloc(p, 80);
//    if (ptr != NULL) {
//        p = ptr;
//    }
//
//    // 释放动态内存并置空
//    free(p);
//    p = NULL;
//
//    return 0;
//}

////柔性数组
//typedef struct {
//    int len;         
//    char data[];      // 柔性数组（C99写法），也可以写 char data[0]
//} FlexArray;
//int main() {
//    FlexArray* fa = (FlexArray*)malloc(sizeof(FlexArray) + 40);
//    if (fa == NULL) {
//        return 1;
//    }
//    FlexArray* fa_new = (FlexArray*)realloc(fa, sizeof(FlexArray) + 80);
//    if (fa_new == NULL) {
//        return 1;
//    }
//    fa = fa_new;
//    free(fa);
//    fa = NULL;
//
//    return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//
//typedef struct {
//    char name[20];
//    int age;
//    float score;
//} Student;
//
//int main() {
//    char ch;
//    char buffer[1024];
//    Student stu = { "ZhangSan", 18, 95.5 }, stu_read;
//    int num;
//    FILE* fp = fopen("demo.txt", "w");
//    if (fp == NULL) { perror("fopen failed"); exit(1); }
//    fputc('H', fp);
//    fputc('i', fp);
//    fclose(fp);
//
//    fp = fopen("demo.txt", "r");
//    if (fp == NULL) { perror("fopen failed"); exit(1); }
//    while ((ch = fgetc(fp)) != EOF) {
//        printf("%c", ch); 
//    }
//    fclose(fp);
//    printf("\n\n");
//
//    fp = fopen("demo.txt", "w");
//    if (fp == NULL) { perror("fopen failed"); exit(1); }
//    fputs("Hello C\n", fp);
//    fputs("File Operation\n", fp);
//    fclose(fp);
//
//    fp = fopen("demo.txt", "r");
//    if (fp == NULL) { perror("fopen failed"); exit(1); }
//    // 格式：fgets(缓冲区, 缓冲区大小, 文件指针)
//    // 特点：最多读「缓冲区大小-1」个字符
//    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
//        printf("%s", buffer); 
//    }
//    fclose(fp);
//    printf("\n");
//
//    fp = fopen("demo.txt", "w");
//    if (fp == NULL) { perror("fopen failed"); exit(1); }
//    fprintf(fp, "Name: %s, Age: %d, Score: %.1f\n", "LiSi", 19, 88.5);
//    fprintf(fp, "Number: %d\n", 1001);
//    fclose(fp);
//
//    fp = fopen("demo.txt", "r");
//    if (fp == NULL) { perror("fopen failed"); exit(1); }
//    char name_buf[20];
//    int age_buf;
//    float score_buf;
//    fscanf(fp, "Name: %s, Age: %d, Score: %f\n", name_buf, &age_buf, &score_buf);
//    fscanf(fp, "Number: %d\n", &num);
//    fclose(fp);
//
//    fp = fopen("demo.bin", "wb");
//    if (fp == NULL) { perror("fopen failed"); exit(1); }
//    // 格式：fwrite(数据地址, 单个元素大小, 元素个数, 文件指针)
//    fwrite(&stu, sizeof(Student), 1, fp);
//    fclose(fp);
//
//    fp = fopen("demo.bin", "rb");
//    if (fp == NULL) { perror("fopen failed"); exit(1); }
//    // 格式：fread(存储地址, 单个元素大小, 元素个数, 文件指针)
//    fread(&stu_read, sizeof(Student), 1, fp);
//    fclose(fp);
//
//    return 0;
//}

