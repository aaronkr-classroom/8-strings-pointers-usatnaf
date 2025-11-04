#include <stdio.h>
#include <string.h>

int string_length(char data[]) {
    int count = 0;
    while (data[count]) count++;
    return count;
}

int main(void) {
    int data_length, str_length;
    char data[10] = { 'h','a','p','p','y',0 };

    data_length = string_length(data);
    str_length = strlen(data);  

    printf(" data length = %d\n", data_length);
    printf(" str length = %d\n", str_length);

    char data2[10] = { 'a','b','c',0 };
    char result[100] = "hello";

    printf(" result(0) = %s\n", result);
    strcpy_s(result, sizeof(result), data2);
    printf(" result(cpy) = %s\n", result);
    strcat_s(result, sizeof(result), "def");
    printf(" result(cat) = %s\n", result);

    return 0;
}
