//#include <stdio.h>
//
//// ���� ����ü
//typedef struct {
//	// ���� ���� �� ���
//	int math;
//	int eng;
//	double avg;
//}Score;
//
//// �л� ����ü
//typedef struct
//{
//	// �й�, �̸�, ����
//	int number;
//	char name[20];
//	Score score;
//}Student;
//
//// �л����� ����Լ�
//void showStudentInfo(Student st) // ����ü �Ű�����
//{
//	printf("�й�: %d, �̸�: %s, ����: %d, ����: %d, ���: %.1lf\n", st.number, st.name, st.score.math, st.score.eng);
//
//}
//
//int main() {
//	// ����ü ���� ����
//	Student s1;
//
//	s1.number = 101;
//	strcpy(s1.name, "���̽�");
//	s1.score.math = 95;
//	s1.score.eng = 80;
//
//	// ��� ���
//	s1.score.avg = (double)(s1.score.math + s1.score.eng) / 2;
//
//	// �л� ���� ���
//	//printf("�й�: %d, �̸�: %s, ����: %d, ����: %d, ���: %.1lf\n", s1.number, s1.name, s1.score.math, s1.score.eng);
//
//
//	showStudentInfo(s1);
//
//
//	return 0;
//}