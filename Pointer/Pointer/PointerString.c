//#include <stdio.h>
//
//int main_PointerString()
//{
//	//char word[] = "apple"; //문자열 - 1차원 배열
//	//printf("%s\n", word);
//
//	//2차원 배열 - word[단어개수][철자의 최대개수]
//	char word[][10] = {"apple", "banana", "grape"};
//	int size;
//
//	printf("%s\n", word[2]);
//	printf("%s\n", word[1]);
//	printf("\n======================\n");
//
//	size = sizeof(word) / sizeof(word[0]);
//	printf("%d %d\n", sizeof(word), sizeof(word[0]));
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%s", word[i]);
//	}
//
//	//문자열 포인터
//	char *fruit[] = { "apple", "banana", "grape" };
//
//	printf("%s\n", fruit[0]);
//	printf("%s\n", fruit[1]);
//
//
//	return 0;
//}