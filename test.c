#include<stdio.h>
//求工资
int main() {
	int age = 0;
	char rank;
	printf("输入工龄：");
	scanf("%d", &age);
	getchar();
	printf("输入职工级别：");
	scanf("%c", &rank);
	//基本工资
	int foundment;
	if (age >= 20)
		foundment = 1800;
	else
		foundment = 800 + (age / 3) * 100;
	//奖金
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
		printf("输入错误");
		break;
	}
	float salary;
	salary = foundment + prize;
	printf("实发工资=%f", salary);

	return 0;
}
