#include <stdio.h>
#include <stdlib.h>

int main() {

	char* pc;
	pc = malloc(sizeof(char) * 26); //1Byte x 26 = 26B
	if (pc == NULL){
		printf("���� �޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
		exit(i);
		}

		*pc = 'A';

	printf("%c\n", *pc);

	free(pc);
	

	return 0;
}