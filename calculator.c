#include<stdio.h>

int main(){
    double num1, num2;
    char operator;

    printf("1つ目の数字を入力してください：");
    scanf("%lf", &num1);

    printf("2つ目の数字を入力してください：");
    scanf("%lf", &num2);

    printf("演算子を入力してください：");
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        printf("%lf + %lf = %lf", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%lf - %lf = %lf", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%lf * %lf = %lf", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("%lf / %lf = %lf", num1, num2, num1 / num2);
        }
        else
        {
            printf("0で割ることはできません。\n");
        }
        break;
    default:
        printf("無効な演算子です。\n");
        break;
    }
    return 0;
}