//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    // �⵵�� �Է��ϼ���.
    int year;
    char city[20];

    printf("�⵵ �Է�: ");
    scanf_s("%d", &year);

    printf("�Է��� �⵵: %d\n", year);

    printf("%d �� �Դϴ�. �޸��ּ�: 0X%x\n", year, &year);

    // ���ø� �Է��ϼ���.
    // �迭�� ��� - scanf_s(���Ĺ���, �迭�̸�, �迭�� �ڷ� ũ��)
    printf("���� �Է�: ");
    scanf_s("%s", city, sizeof(city));
    printf("%s��\n", city);

    // �޸� �ּ�

    //int num1 = 90;
    //printf("%d, %x\n", num1, &num1);

    //int num2 = 80;
    //printf("%d, %x\n", num2, &num2);

    //printf("=========================\n");

    //// ������ 3���� �迭
    //int score[3] = {80, 70, 90};

    //printf("%d %x\n", score[0], &score[0]);
    //printf("%d %x\n", score[1], &score[1]);
    //printf("%d %x\n", score[2], &score[2]);

    //// �迭�� �����ּҴ� �迭�� �̸��̴�
    //printf("%d %x\n", score[0], score);


    return 0;
}