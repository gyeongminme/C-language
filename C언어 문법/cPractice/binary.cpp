#include <stdio.h>

void binary(int v) {
    if (v > 1) {
        binary(v >> 1);
       
    } //0000 0000
    
     printf("%d", v & 1);
}

void binary16(int v) {
  
    for (int i = 15; i >= 0; i--) {
        int tmp = (v >> i);
        printf("%d", tmp & 1 );
    
        if (i % 4 == 0) {
            printf(" ");
        }
    } 
} 

int main(void) {

    printf("16Áø¼ö");

    binary16(12);
    


    return 0;
}