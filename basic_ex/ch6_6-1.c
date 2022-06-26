#include <stdio.h>
void main(){
	int arr1[3] = {10, 20, 30};	//1차 배열 선언&초기화
	int arr2[]	= {10, 20, 30};
	int arr3[3] = {10};
	int arr4[4] = {0};
	int i;
	for(i=0; i <=2; i++)
	 printf("arr1[%d] = %d \t", i, arr1[i]);
	printf("\n");
	for(i=0; i <=2; i++)
	 printf("arr2[%d] = %d \t", i, arr2[i]);
	printf("\n");
	for(i=0; i <=2; i++)
	 printf("arr3[%d] = %d \t", i, arr3[i]);
	printf("\n");
	for(i=0; i <=2; i++)
	 printf("arr4[%d] = %d \t", i, arr4[i]);
	printf("\n");
}
