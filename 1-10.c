#include <stdio.h>

int main(void) {
    
    char arr[2][3][30];

    int i, j;

    for (i = 0; i < 2; i++) {

        for (j = 0; j < 3; j++) {
            if (j == 0) {
                printf("학생 %d 이름 입력: ", i+1);
            }
            else if (j == 1) {
                printf("학생 %d 학과 입력: ", i+1);
            }
            else {
                printf("학생 %d 학번 입력: ", i+1);
            }
            scanf("%s", arr[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 2; i++) {
        printf("학생 %d의 이름 : %s\n", i + 1, arr[i][0]);
        printf("학생 %d의 학과 : %s\n", i + 1, arr[i][1]);
        printf("학생 %d의 학번 : %s\n", i + 1, arr[i][2]);
        printf("\n");
    }

    for (i = 0; i < 2; i++) {
        printf("학생 %d\n", i + 1);

        for (j = 0; j < 3; j++) {
            printf("%s\n", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
