#include <stdio.h>

// 성적 관리 프로젝트

int  main() {

	// 구조체 배열 선언
	Student s[3];

	printf("========성적 관리 프로그램========");
	// 콘솔입력
	for (int i = 0; i < 3; i++) {
		printf("학번 입력: ");
		printf("%d", &s[i].number);
	}

	// 학생 정보 출력
	for (int i = 0; i < 3; i++)
	{
		printf("학번 %d\n", s[i].number);
	}


	return 0;
}