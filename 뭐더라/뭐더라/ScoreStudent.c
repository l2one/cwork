//#include <stdio.h>
//
//// 성적 구조체
//typedef struct {
//	// 과목별 점수 및 평균
//	int math;
//	int eng;
//	double avg;
//}Score;
//
//// 학생 구조체
//typedef struct
//{
//	// 학번, 이름, 성격
//	int number;
//	char name[20];
//	Score score;
//}Student;
//
//// 학생정보 출력함수
//void showStudentInfo(Student st) // 구조체 매개변수
//{
//	printf("학번: %d, 이름: %s, 수학: %d, 영어: %d, 평균: %.1lf\n", st.number, st.name, st.score.math, st.score.eng);
//
//}
//
//int main() {
//	// 구조체 변수 선언
//	Student s1;
//
//	s1.number = 101;
//	strcpy(s1.name, "이이슬");
//	s1.score.math = 95;
//	s1.score.eng = 80;
//
//	// 평균 계산
//	s1.score.avg = (double)(s1.score.math + s1.score.eng) / 2;
//
//	// 학생 정보 출력
//	//printf("학번: %d, 이름: %s, 수학: %d, 영어: %d, 평균: %.1lf\n", s1.number, s1.name, s1.score.math, s1.score.eng);
//
//
//	showStudentInfo(s1);
//
//
//	return 0;
//}