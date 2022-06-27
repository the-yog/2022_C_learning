#include <stdio.h>
void main(){
	static int score[3][4] = {{100, 90, 80, 70}, 
	{95, 85, 75, 65}, {50, 30, 100, 20}}; // 2차원 배열 선언과 초기화
	int sum, i, j;
	printf("번호\tsub1\tsub2\tsub3\tsub4\t 합계 \n");
	for(i=0; i < 3; ++i){
		sum = 0;
		printf("%d", i+1);
		for(j=0; j < 4; ++j){
			printf("\t%d", score[i][j]);
			sum += score[i][j];
		}
		printf("\t%3d \n", sum);
	} 
}
