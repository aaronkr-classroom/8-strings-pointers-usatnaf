#include<stdio.h>

int main(void) {
	short birthday;
	short* ptr;
	ptr = &birthday;


	int intvar = 42;
	float floatvar = 3.141592;
	char charvar = 'A';
	double doublevar = 9.81;

	int* intptr = &intvar;
	float* floatptr = &floatvar;
	char* charptr = &charvar;
	double* doubleptr = &doublevar;

	printf("\nbirthday 변수의 주소는 %p입니다.",ptr);

	printf("\nintvar 변수 값:%d \t주소:%p\t", *intptr,intptr);
	printf("\nfloatvar 변수 값:%f \t주소:%p\t", *floatptr, floatptr);
	printf("\ncharvar 변수 값:%c \t주소:%p\t", *charptr, charptr);
	printf("\ndoublevar 변수 값:%.2f \t주소:%p\t", *doubleptr, doubleptr);



	return 0;
}