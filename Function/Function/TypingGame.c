#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	char* words[] = { "ant", "bear", "chicken", "cow", "deer",
		"elephant", "fox", "horse", "monkey", "tiger" };
	char* question;  //����
	char answer[20]; //����� �Է�
	int n = 1;  //���� ��ȣ
	clock_t start, end;  //���۽ð�, ����ð�
	double elapsed;  //�ҿ� �ð�
	int size, idx;  //�迭�� ũ��

	//���� seed ����
	srand(time(NULL));

	printf("���� Ÿ�� ����, �غ�Ǹ� ����>");
	getchar();  //����

	start = clock();    //���� �ð� 
	while (n <= 10)
	{
		printf("\n���� %d\n", n);
		size = sizeof(words) / sizeof(words[0]);
		idx = rand() % size;
		question = words[idx];

		printf("%s\n", question);  //���� ����
		scanf_s("%s", answer, sizeof(answer)); //����� �Է�

		if (strcmp(question, answer) == 0)  //��ġ�ϸ�
		{
			printf("���!\n");
			n++;  //���� ����
		}
		else
		{
			printf("��Ÿ! �ٽ� ����!\n");
		}
	}
	end = clock();
	//CLOCKS_PER_SEC ����� ms(����ũ����)�� s(��)�� ǥ������
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
	printf("���� �ҿ� �ð�; %.2lf��\n",  elapsed);

	return 0;
}