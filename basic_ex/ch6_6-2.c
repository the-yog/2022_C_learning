#include <stdio.h>
int score_sum(int gr[], int);	//score_sum 함수 원형 선언
void main(){
	int score[5] = {10, 20, 30, 40, 50};
	int sum;
	sum = score_sum(score, 5);
	// 배열 전체를 함수의 매개변수로 줄 땐 첨자를 빼고, 배열명만 호출
	printf("sum=%d \n", sum);
	printf("score[0]= %d \n", score[0]); 
}
int score_sum(int gr[], int size){ 
// gr[] 해도 됨. 크기 쓰면 매개변수 배열 크기는 항상 한 크기로 고정됨 
	int sum = 0;
	int i;
	for(i = 0; i < size; i++)
	 sum += gr[i];
	gr[0] = 0;
	return sum;
}
