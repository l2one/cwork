#include <stdio.h>
#include <stdlib.h>

int main() {

	char* pc;
	pc = malloc(sizeof(char) * 26); //1Byte x 26 = 26B
	if (pc == NULL){
		printf("동적 메모리 할당에 실패하였습니다.\n");
		exit(i);
		}

		*pc = 'A';

	printf("%c\n", *pc);

	free(pc);
	

	return 0;
}