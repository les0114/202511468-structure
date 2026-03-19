#include <stdio.h>

int main(void) {

    // 3차원 배열 선언
    int array[2][3][4] = {0,};

    int x, y, z;

    // 첫 번째 차원 반복(array[0] -> array[1] 선택)
    for (x = 0; x < 2; x++) {

        // 두 번째 차원 반복(행 번호 바꿔가며)
        for (y = 0; y < 3; y++) {

            // 세 번째 차원 반복(열 번호 바꿔가며)
            for (z = 0; z < 4; z++) {
                scanf("%d", &array[x][y][z]);
            }
        }
    }

    for (x = 0; x < 2; x++) {
        for (y = 0; y < 3; y++) {
            for (z = 0; z < 4; z++) {

                printf("array[%d][%d][%d] = %d\n", x, y, z, array[x][y][z]);
            }
        }
    }

    return 0;
}