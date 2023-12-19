#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int cal = 0; //±Ì æ––∫≈
    for (int i = 0; i < 6; i++) {
        if (i < 2) {
            for (int j = 0; j < 12; j++) {
                if (j == 5 || j == 6) {
                    printf("%s", "*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else if (i == 2 || i == 3) {
            for (int j = 0; j < 12; j++) {
                printf("%s", "*");
            }
            printf("\n");
        }
        else {
            for (int j = 0; j < 12; j++) {
                if (j == 4 || j == 7) {
                    printf("%s", "*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}