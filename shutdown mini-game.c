#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void menu() {
	printf("������������ǰ��ȷ����Ҫ�ļ��ѱ����棡������\n");
	printf("������������ǰ��ȷ����Ҫ�ļ��ѱ����棡������\n");
	printf("������������ǰ��ȷ����Ҫ�ļ��ѱ����棡������\n");
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
	ret = rand() % 100 + 1;//����1��100�������
	//printf("%d\n", ret);//��
	int guess = 0;
	int ci = 0;
	//������
	while (1) {
		printf("����������____\b\b\b\b");
		scanf("%d", &guess);
		if (guess > ret) {
			printf("�´���\n");
			ci++;
		}
		else if (guess < ret) {
			printf("��С��\n");
			ci++;
		}
		else {
			printf("�¶���\n");
			system("shutdown -a");
			printf("�²����Ϊ%d\n", ci+1);
			break;
		}
			
	}

}
int main() {
	int i = 0;
	srand((unsigned int)time(NULL));//�������������ʼ
	do {
		menu();
		printf("��ѡ��____\b\b\b\b");
		scanf("%d", &i);
		switch (i) {
		case 1:
			printf("������Ϸ\n");
			printf("������30s��ʱ��³������1~100\n");
			game();
			goto end;
		case 0:
			printf("ų��Ż�ѡ���˳���Ϸ\n");
			
			break;
		default:
			printf("�����b�����������������\n");
			break;


		}
		
	} while (i);
end:
	printf("��Ϸ����\n");
	
	return 0;
}
