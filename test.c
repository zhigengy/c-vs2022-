#include<stdio.h>
//����
int main() {
	int age = 0;
	char rank;
	printf("���빤�䣺");
	scanf("%d", &age);
	getchar();
	printf("����ְ������");
	scanf("%c", &rank);
	//��������
	int foundment;
	if (age >= 20)
		foundment = 1800;
	else
		foundment = 800 + (age / 3) * 100;
	//����
	float prize;
	switch (rank) {
	case'A':
		prize = foundment * 0.45;
		break;
	case'B':
		prize = foundment * 0.35;
		break;
	case'C':
		prize = foundment * 0.25;
		break;
	case'D':
		prize = foundment * 0.15;
		break;
	case'E':
		prize = foundment * 0;
		break;
	default:
		printf("�������");
		break;
	}
	float salary;
	salary = foundment + prize;
	printf("ʵ������=%f", salary);

	return 0;
}
