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

////判断 101 到 200 之间的素数
//int isPrime(int num) {
//	int i = 0;
//	for (i = 2; i < num / 2; i++) {
//		if (num % i == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	int i = 0;
//	int ret = 0;
//	for (i = 101; i <= 200; i += 2) {
//		ret = isPrime(i);
//		if (ret == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////将一个正整数分解质因数。例如：输入 90,打印出 90=2*3*3*5
//#include <math.h>
//int isPrime(int num) {
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++) {
//		if (num % i == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	int num = 0;
//	if (scanf("%d", &num) != 1) {
//		printf("错误");
//		return 1;
//	}
//	if (num < 0) {
//		printf("错误");
//		return 1;
//	}
//	printf("%d=", num);
//	int i = 0;
//	int ret = num;
//		for (i = 2; i <= num; i++) {
//			while (ret % i == 0) {
//				printf("%d", i);
//				ret = ret / i;
//				
//				if (ret != 1) printf("*");
//			}
//		}
//	
//	return 0;
//}

////利用条件运算符的嵌套来完成此题：学习成绩 >= 90分的同学用A表示，60 - 89分之间的用B表示，60分以下的用C表示。
//int main() {
//	int i = 0;
//	if (scanf("%d", &i) != 1) {
//		printf("错误");
//		return 1;
//	}
//	if (i < 0 || i>100) {
//		printf("错误");
//		return 1;
//	}
//	char grade = ((i >= 90) ? 'A' : (i >= 60) ? 'B' : 'C');
//	printf("%c", grade);
//	return 0;
//}

////输入两个正整数m和n，求其最大公约数和最小公倍数。
//int main() {
//	int i = 1, j = 0, m = 0, n = 0;
//	if (scanf("%d %d", &m, &n) != 2) {
//		printf("错误");
//		return 1;
//	}
//	if (m <= 0 || n <= 0) {
//		printf("错误");
//		return 1;
//	}
//	j = m * n;
//	while (i) {
//		i = m % n;
//		m = n;
//		n = i;
//	}
//	i = m;
//	j = j / i;
//	printf("%d %d", i, j);
//	return 0;
//}

////求 s=a+aa+aaa+aaaa+aa...a 的值，其中 a 是一个数字，例如 2+22+222+2222+22222 (此时共有5个数相加)，几个数相加有键盘控制。
//int main() {
//	int num = 0,n = 0,s = 0;
//	if (scanf("%d %d", &num, &n) != 2) {
//		printf("错误");
//		return 1;
//	}
//	if (num < 0 || num>9 || n < 0) {
//		printf("错误");
//		return 1;
//	}
//	int ret = 0;
//	for (int i = 1; i <= n;i++) {
//		ret = ret * 10 + num;
//		s += ret;
//	}
//	printf("%d", s);
//	return 0;
//}
