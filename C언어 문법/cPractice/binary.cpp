#include <stdio.h>

//void binary(int v) {
//    if (v > 1) {
//        binary(v >> 1);
//       
//    }
//    
//     printf("%d", v & 1);
//}

void binary2(int v) {
  
    for (int i = 15; i >= 0; i--) {
        int tmp = (v >> i);
        printf("%d", tmp & 1 );
    
        if (i % 4 == 0) {
            printf(" ");
        }
    } 
} 

int main(void) {

    printf("2진수 변환");


    binary2(12);
    


    return 0;
}