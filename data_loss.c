#include<stdio.h>

int main(void) {
	unsigned int x = 0x123456789;
	long lg = 2147483638;
	double xl = 123456789123.456789;


	printf("uint:%d\n", x);
	printf("uint->short:%d\n", (short)x);
	printf("uint->char:%d\n", (char)x);
	printf("uint:%d\n", lg);
	printf("uint->int:%d\n", (int)lg);
	printf("uint->char:%d\n", (char)lg);
	printf("uint:%lf\n", xl);
	printf("uint->long:%d\n", (long)xl);
	printf("uint->short:%d\n", (short)xl);
	return 0;
}