#include <stdio.h>

// ���� ���� ������Ʈ

int  main() {

	// ����ü �迭 ����
	Student s[3];

	printf("========���� ���� ���α׷�========");
	// �ܼ��Է�
	for (int i = 0; i < 3; i++) {
		printf("�й� �Է�: ");
		printf("%d", &s[i].number);
	}

	// �л� ���� ���
	for (int i = 0; i < 3; i++)
	{
		printf("�й� %d\n", s[i].number);
	}


	return 0;
}