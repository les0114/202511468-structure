#include <stdio.h>

int main(void) {

    // 배열로 문자열 저장
    char *addr1[] = {"Korea", "Seoul", "Mapo", "152번지 2/3"};
    char *addr2[] = {"Korea", "Seoul", "Jongno", "152번지 2/3"};

    int i;

    for (i = 0; i < 4; i++) {
        printf("%s\n", addr1[i]);
    }

    printf("\n");

    for (i = 0; i < 4; i++) {
        printf("%s\n", addr2[i]);
    }
    
    return 0;
}