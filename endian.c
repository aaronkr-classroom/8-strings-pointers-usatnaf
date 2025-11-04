#include<stdio.h>

void check_endian() {

	unsigned int num = 0x12345678;
	unsigned char *byte_ptr = (unsigned char*)&num;

	for (int i = 0; i < sizeof(num); i++) {
		printf("%p  0x%02x\n", (byte_ptr + i), byte_ptr[i]);
	}

	if (byte_ptr[0] == 0x12) {
		printf("\n This is big endian");
	}
	else if (byte_ptr[0] == 0x78) {
		printf("\nThis is _little endian");
	}
	else {
		printf("\n unknown endian");
	}
}

int main(void) {
	check_endian();
	return 0;
}