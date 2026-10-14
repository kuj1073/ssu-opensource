#include <stdio.h>

float add(float a, float b){
    return a + b;
}

float sub(float a, float b){
    return a - b;
}

float mul(float a, float b){
    return a * b;
}

float div(float a, float b){
    if (b == 0) {
        printf("0으로 나눌 수 없습니다.\n");
        return 0;
    }
    return a / b;
}

int main(void){
    float a, b;
    printf("두 수를 입력하세요(a b): ");
    scanf("%f %f", &a, &b);

    printf("%g와 %g를 더한 값은 %g입니다.\n", a, b, add(a, b));
    printf("%g에서 %g를 뺀 값은 %g입니다.\n", a, b, sub(a, b));
    printf("%g와 %g를 곱한 값은 %g입니다.\n", a, b, mul(a, b));
    printf("%g에서 %g를 나눈 값은 %g입니다.\n", a, b, div(a, b));

    return 0;
}
