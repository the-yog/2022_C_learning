#include <stdio.h>
void score_average(int gr[][2][3], int, int, int);

void main(){
	int score[4][2][3]={{{10, 20, 30},{10, 10, 10}}, {{0, 40, 50},
						{10, 10, 10}}, {{30, 30, 30},{50, 50, 50}}, 
						{{20, 20, 20},{0, 0, 0}}};
	score_average(score, 4, 2, 3);
}

void score_average(int gr[][2][3], int size, int row, int column){
	int student_sum=0, subject_sum=0;
	int subject_average=0;
	int i, j, k;
	for(k = 0; k < size; k++){ // 각 클래스에 대한 루프 
		student_sum = 0;
		for(i = 0; i < row; i++){
			subject_sum = 0;
			for(j = 0; j < column; j++)
				// k번째 클래스의 j번째 학생의 과목 점수 합
				subject_sum += gr[k][i][j];
			// k번째 클래스의 j번째 학생의 평균 점수
			subject_average = subject_sum/column;
			printf("student%d average = %d \n", i + 1, subject_average);
			// k번째 클래스의 전체 학생의 평균 점수의 합 
			student_sum += subject_average;
		}
		//각 클래스의 평균 점수 출력
		printf("class %d average = %d \n\n", k + 1, student_sum/row);
	}
}
