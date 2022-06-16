#include <stdio.h>
void main(){
	int i, j;			 	// i 는 행 j는 열  
	for(i=0; i<5; i++){		 
		for(j=0; j<5; j++){	// 5줄 이내에서  
			if(i==j)        // 행값과 열값이 같으면                 
				printf("*");// * 표시  1, 2, 3, 4, 5 순으로 이동 
			else
				printf(" ");// 아니면 공백 
		}
		printf("\n");
	}
	for(i=0;i<6;i++){		 
		for(j=5;j>-1;j--){	// 5칸 이내에서 
			if(i==j)		// 열값과 행값이 같으면 
				printf("*");// * 표시 5, 4, 3, 2, 1 열 순으로 이동 
			else
				printf(" ");// 아니면 공백 
		}
		printf("\n");
	}
}
