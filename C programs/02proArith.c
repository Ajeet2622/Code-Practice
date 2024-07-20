#include <stdio.h>

int main(){
    int num1 = 90;
    printf("%d\n", num1);

    int num2 = 89;
    printf("%d\n", num2);

    int sum = num1 + num2;
    printf("%d\n", sum);

    int sub = num1 - num2;
    printf("%d\n", sub);

    int mul = num1 * num2;
    printf("%d\n", mul);

    int div = num1 / num2;
    printf("%d\n", div);

    int modulo = num2 % 44;
    printf("%d\n", modulo);

    ++num1;
    printf("%d\n", num1);

    --num2;
    printf("%d\n", num2);

    return 0;
}
