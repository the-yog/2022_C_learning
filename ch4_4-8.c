#include <stdio.h>
void main(){
	
	int n;
	printf("n=?");
	scanf("%d", &n);
	printf("n %% 5 = %d \n", n % 5);    // %%는 %문자를 출력하기 위한 것
	switch(n % 5){                      // 입력된 수가 '10'이라면 10을 5로 나눠 그 나머지에 해당하는 수로 분기
		case 0 : printf("나머지는 0 \n");  // case 0 만 실행되어야 하지만 다른 모든 경우가 실행 됨 why? break 를 안 써서!
		case 1 : printf("나머지는 1 \n");
		case 2 : printf("나머지는 2 \n");
		default: printf("나머지는 3이나 4 \n");
		
	}
}
