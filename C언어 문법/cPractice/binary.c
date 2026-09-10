#include <stdio.h>


void binary2(int v) {

    for (int i = 31; i >= 0; i--) {
        int tmp = (v >> i);
        printf("%d", tmp & 1);

        if (i % 4 == 0) {
            printf(" ");
        }
    }
}

void binary16(int v) {
    char hexChars[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

    for (int i = 7; i >= 0; i--) {
        int tmp = v >> i * 4 & 0x0f;
        printf("%c", hexChars[tmp]);

        if (i % 2 == 0)
        {
            printf(" ");
        }
    }
}

int main(void) {

    printf("2진수 변환\n");
    binary2(12);

    printf("\n16진수 변환\n");
    binary16(76);


    return 0;
}