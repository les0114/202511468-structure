#include <stdio.h>

int main(void) {

    char str[50];
    int length = 0;

    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("\n입력된 문자열은 \"%s\" 입니다.\n", str);
    printf("입력된 문자열의 길이 = %d\n", length);

    return 0;
}