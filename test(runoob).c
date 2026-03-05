//练习

////1 2 3 4 能组成多少无重复的三位数
//int main() {
//	int a = 0, b = 0, c = 0;
//	int count = 0;
//	for (a = 1; a < 5; a++) {
//		for (b = 1; b < 5; b++) {
//			for (c = 1; c < 5; c++) {
//				if (a == b || b == c || a == c) {
//					continue;
//				}
//				printf("%d \n", a * 100 + b * 10 + c);
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

////题目:企业发放的奖金根据利润提成。
////#利润(I)低于或等于10万元时，奖金可提10%;
////#利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%;
////#20万到40万之间时，高于20万元的部分，可提成5%;
////#40万到60万之间时高于40万元的部分，可提成3%;
////#60万到100万之间时，高于60万元的部分，可提成1.5%;
////#高于100万元时，超过100万元的部分按1%提成。从键盘输入当月利润I，求应发放奖金总数?
//
//int main() {
//	int I = 0;
//	scanf("%d", &I);
//	int ret = I / 100000;
//	double p = 0;
//	switch (ret) {
//	case 0:p = I * 0.1; break;
//	case 1:p = 10000 + (I - 100000) * 0.075; break;
//	case 2:
//	case 3:p = 10000 + 100000 * 0.075 + (I - 200000) * 0.05;break;
//	case 4:
//	case 5:p = 10000 + 100000 * 0.075 + 200000 * 0.05 + (I - 400000) * 0.03; break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:p = 10000 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03+(I - 600000) * 0.015; break;
//	default:p = 10000 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015+(I - 1000000) * 0.01; break;
//
//	}
//	printf("%f", p);
//	return 0;
//}

////一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//int main() {
//	int x = 0;
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 1; i <= 168; i++) {
//		for ( j = 1; j <= 168; j++) {
//
//				if (i * i - j * j == 168) {
//
//					printf("%d\n", i * i - 268);
//
//				}
//			}
//	}
//	return 0;
//}

////输入某年某月某日，判断这一天是这一年的第几天？
//int ISleapyear(int year) {
//	if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))) {
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	int year = 0, month = 0, day = 0;
//	int i = 0;
//	int total = 0;
//	int monthday[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (scanf("%4d %2d %2d", &year, &month, &day) != 3) {
//		printf("shurucuowu");
//		return 1;
//	}
//	if (year <= 0) {
//		printf("shurucuowu");
//		return 1;
//	}
//	if (month <= 0||month>=13) {
//		printf("shurucuowu");
//		return 1;
//	}
//	int ret = ISleapyear(year);
//	if (ret == 1) {
//		monthday[1]++;
//	}
//	if (day <= 0||day>monthday[month-1]) {
//		printf("shurucuowu");
//		return 1;
//	}
//
//	for (i = 0; i < month - 1; i++) {
//		total += monthday[i];
//	}
//	total += day;
//	
//	printf("%d", total);
//	return 0;
//}

////输出99乘法表
//int main() {
//	int i = 0, j = 0;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j <=i; j++) {
//			printf(" %d*%d=%-2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
//int main() {
//	int a = 1, b = 1;
//	int c = a + b;
//	printf("1 1 ");
//	for (int i = 38; i > 0; i--) {
//		printf("%d ", c);
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	return 0;
//}


