#include<stdio.h>
//�������е�������
void cmp(int i,int n,int arr1[],int arr2[],int j) {
	int x = 0;
	for (i = 0; i < n; i++) {
		if (arr1[i] == arr2[j])
			x++;
	}
	//���
	printf("%d\n", x);
}
int main() {
	//�����ݽ�����a
	int n = 0;
	int i = 0;
	int j = 0;
	int arr1[10000] = { 0 };
	int arr2[10000] = { 0 };
	int max = arr1[0];
	printf("���������С��");
	scanf("%d",&n);
	printf("���������е�ÿ������");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}
	//�ҵ�����a��������M

	for (i = 0; i < n; i++) {
		if (arr1[i] > max)
			max = arr1[i];
	}
	//printf("%d", max);
	//������b 0~M
	for (i = 0, j = 0; j <= max; i++, j++) {
		arr2[i] = j;
	}
	//a ��������b����Ƚ���ͬ�Ĵ����ͼ�һ
	for (j = 0; j <= max; j++) {
		cmp(i, n, arr1, arr2, j);//�ȽϺ���
	}
	return 0;
}

