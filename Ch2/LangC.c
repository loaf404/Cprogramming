#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

// **********************************************
// 제  목  :  포인터
// 날  짜  :  2026년 9월8일
// 작성자  :  2600179 조성찬
// **********************************************

int main(void) {
	int num1 = 3, num2 = 5;
	int* ptr1 = &num1, * ptr2 = &num2;

	*ptr1 = (*ptr1 * 20) + (*ptr2 * 8);
	printf("%d\n", *ptr1);
	return 0;
}
