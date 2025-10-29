#include<stdio.h>
//给数组中的数计数
void cmp(int i,int n,int arr1[],int arr2[],int j) {
	int x = 0;
	for (i = 0; i < n; i++) {
		if (arr1[i] == arr2[j])
			x++;
	}
	//输出
	printf("%d\n", x);
}
int main() {
	//输数据进数组a
	int n = 0;
	int i = 0;
	int j = 0;
	int arr1[10000] = { 0 };
	int arr2[10000] = { 0 };
	int max = arr1[0];
	printf("输入数组大小：");
	scanf("%d",&n);
	printf("输入数组中的每个数：");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}
	//找到数组a中最大的数M

	for (i = 0; i < n; i++) {
		if (arr1[i] > max)
			max = arr1[i];
	}
	//printf("%d", max);
	//新数组b 0~M
	for (i = 0, j = 0; j <= max; i++, j++) {
		arr2[i] = j;
	}
	//a 数组数与b数组比较相同的次数就加一
	for (j = 0; j <= max; j++) {
		cmp(i, n, arr1, arr2, j);//比较函数
	}
	return 0;
}

