#include <stdio.h>
#include <stdlib.h>  //srand(), rand() ����
#include <time.h> //time() ����

int main_Rand()
{
	int rndVal;  //�������� ������ ���� ���� 
	int coin, dice;  //����, �ֻ���

	//rand() - ����(������ ��)
	//srand(11); //seed�� ���� ����
	srand(time(NULL));  //�ð��� �帣�Ƿ� �Ź� seed�� �ٲ�

	rndVal = rand();  //rand() ȣ��
	//printf("%d\n", rndVal);

	//����
	coin = rand() % 2;  //������ 0, 1
	printf("����: %d\n", coin);

	if (coin == 0)
	{
		printf("�ո�\n");
	}
	else
	{
		printf("�޸�\n");
	}

	//�ֻ��� ��
	dice = rand() % 6 + 1;  //������ 0~5�� 1����, �ֻ����� 1~6
	//printf("�ֻ��� ��: %d\n", dice);

	//�ֻ��� 10�� ������
	for (int i = 1; i <= 10; i++)
	{
		dice = rand() % 6 + 1;
		printf("�ֻ��� ��: %d\n", dice);
	}

	//������� �����ϰ� ���
	char season[4][5] = { "��", "����", "����", "�ܿ�" };
	int rndIdx = 0;

	/*printf("%s\n", season[0]);
	printf("%s\n", season[1]);
	printf("%s\n", season[2]);
	printf("%s\n", season[3]);*/

	int size = sizeof(season) / sizeof(season[0]);
	printf("%d %d\n", sizeof(season), sizeof(season[0]));
	printf("%d\n", size);

	rndIdx = rand() % size;  //������ 0~3
	printf("����: %s\n", season[rndIdx]);

	//������� �����ͷ� ����
	char *season2[] = { "��", "����", "����", "�ܿ�" };

	printf("����: %s\n", season2[rndIdx]);
	return 0;
}
