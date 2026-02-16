#include <stdio.h>

int main(){
    
    double num1, num2, result;
    char operator;

    printf("1つ目の数字を入力してください：");
    scanf("%lf", &num1);

    printf("演算子を入力してください：");
    scanf(" %c", &operator);

    printf("2つ目の数字を入力してください：");
    scanf("%lf", &num2);

    switch (operator){
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0){
                result = num1 / num2; break;
            }else{
                printf("0で割ることはできません。\n"); return 1;
            }
        default: printf("無効な演算子です。\n"); return 1;
    }

    if(result==(int)result) {
        printf("結果: %d\n", (int)result);
    }else{
        printf("結果: %lf\n", result);
    }
    return 0;
}