#include <stdio.h>
void main(){
	static a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	// static int 2차원 배열 a 선언 및 초기화
	int i, j, *pt;
	pt = a[0];
	// pt=a 또는 pt=&a[0][0]과 동일
	while(pt<=&a[2][2]){ // 2차원 배열 a의 마지막 원소까지 출력
	 for(i=0; i<3; i++){
	 	for(j=0; j<3; j++){
	 		printf("a[%d][%d]=%d	", i, j, *pt);
	 		pt++;
		 }
		 printf("\n");
	}
  }
}
