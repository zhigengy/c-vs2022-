#include<stdio.h>
//����
//int main(){
//	int age=;
//	char rank;
//	printf("���빤�䣺");
//	scanf("%d", &age);
//	getchar();
//	printf("����ְ������");
//	scanf("%c", &rank);
//	//��������
//	int foundment;
//	if (age >= 20)
//		foundment = 1800;
//	else
//		foundment = 800 + (age / 3) * 100;
//	//����
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
//		printf("�������");
//		break;
//	}
//	float salary;
//	salary = foundment + prize;
//	printf("ʵ������=%f", salary);
//	
//	return 0;
//}
 
//�������
//int main() {
//	int year, month, day;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%2d\nmonth=%02d\nday=%02d", year, month, day);
//	return 0;
//}

//ת���ַ���ʹ��
//int main() {
//	float salary;
//	printf("\asalary:");
//	printf("$_______\b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f is ok", salary);
//	printf("\rGee!\n");
//	return 0;
//} 

//�����ֵ
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

//��������
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

//�淶 
//int a = 0;
//float b = 0.0f;
//double c = 0.0;

//���ظ�
//쳲���������
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

//쳲������������
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
//		int ret = 1;//����Ҫ
//		for (i = 1; i <= a; i++) {
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
// ���ظ�
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
//���ظ���ϰ
////�������������е����֣����ֲ��ң�
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
//			printf("�±�Ϊ%d", mid);
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

////�𲽸���
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
//		//�����Ļ
//		system("cls");//#include<stdlib.h>//����vsû��Ҳ����
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//���Բ����������1--100)
//������
//�´�/С��
//�¶Խ���
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
//	ret = rand() % 100 + 1;//����1��100�������
//	//printf("%d\n", ret);
//	int guess = 0;
//	int ci = 0;
//	//������
//	while (1) {
//		printf("����������____\b\b\b\b");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("�´���\n");
//			ci++;
//		}
//		else if (guess < ret) {
//			printf("��С��\n");
//			ci++;
//		}
//		else {
//			printf("�¶���\n");
//			printf("�²����Ϊ%d\n", ci+1);
//			break;
//		}
//			
//	}
//
//}
//int main() {
//	int i = 0;
//	srand((unsigned int)time(NULL));//�������������ʼ
//	do {
//		menu();
//		printf("��ѡ��____\b\b\b\b");
//		scanf("%d", &i);
//		switch (i) {
//		case 1:
//			printf("������Ϸ\n");
//			game();
//			goto end;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("���������������\n");
//			break;
//
//
//		}
//		
//	} while (i);
//end:
//	printf("��Ϸ����\n");
//	
//	return 0;
//}

////�ػ�С����
//#include <string.h>
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 360");
//	again:
//	printf("60���ػ������롰������ ����ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0) {
//		system("shutdown -a");
//
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}
//

//д��100��200����������
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
//	for (i = 101; i <= 200; i += 2) {//ż��һ��������������������ż��
//		if (sushu(i)) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//�������е�������
//void cmp(int i,int n,int arr1[],int arr2[],int j) {
//	int x = 0;
//	for (i = 0; i < n; i++) {
//		if (arr1[i] == arr2[j])
//			x++;
//	}
//	//���
//	printf("%d\n", x);
//}
//int main() {
//	//�����ݽ�����a
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
//	//�ҵ�����a��������M
//
//	for (i = 0; i < n; i++) {
//		if (arr1[i] > max)
//			max = arr1[i];
//	}
//	//printf("%d", max);
//	//������b 0~M
//	for (i = 0, j = 0; j <= max; i++, j++) {
//		arr2[i] = j;
//	}
//	//a ��������b����Ƚ���ͬ�Ĵ����ͼ�һ
//	for (j = 0; j <= max; j++) {
//		cmp(i, n, arr1, arr2, j);//�ȽϺ���
//	}
//	return 0;
//}

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