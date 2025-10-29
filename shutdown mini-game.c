#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void menu() {
	printf("！！！！游玩前请确保重要文件已被保存！！！！\n");
	printf("！！！！游玩前请确保重要文件已被保存！！！！\n");
	printf("！！！！游玩前请确保重要文件已被保存！！！！\n");
	printf("############################################\n");
	printf("############################################\n");
	printf("############################################\n");
	printf("###################1.play###################\n");
	printf("############################################\n");
	printf("###################0.exit###################\n");
	printf("############################################\n");
	printf("############################################\n");
	printf("############################################\n");
}
void game() {
	int ret = 0;
	system("shutdown -s -t 30");
	ret = rand() % 100 + 1;//生成1到100的随机数
	//printf("%d\n", ret);//答案
	int guess = 0;
	int ci = 0;
	//猜数字
	while (1) {
		printf("请输入数字____\b\b\b\b");
		scanf("%d", &guess);
		if (guess > ret) {
			printf("猜大了\n");
			ci++;
		}
		else if (guess < ret) {
			printf("猜小了\n");
			ci++;
		}
		else {
			printf("猜对了\n");
			system("shutdown -a");
			printf("猜测次数为%d\n", ci+1);
			break;
		}
			
	}

}
int main() {
	int i = 0;
	srand((unsigned int)time(NULL));//给随机数来个开始
	do {
		menu();
		printf("请选择____\b\b\b\b");
		scanf("%d", &i);
		switch (i) {
		case 1:
			printf("进入游戏\n");
			printf("现在有30s的时间猜出随机数1~100\n");
			game();
			goto end;
		case 0:
			printf("懦夫才会选择退出游戏\n");
			
			break;
		default:
			printf("你个笨b，输入错误，重新输入\n");
			break;


		}
		
	} while (i);
end:
	printf("游戏结束\n");
	
	return 0;
}
