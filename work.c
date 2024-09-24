#include <stdio.h>

int main() {
    int a = 2; 
    int c, d, e, f;
    int b = 3; 
    char operation;
    printf("введите четыре числа: ");
    scanf("%d %d %d %d", &c, &d, &f, &e);    
    printf(" a + b: %d\n", a + b); 
    printf(" c + d: %d\n", c + d); 
    printf(" e + f: %d\n", e + f);     
    printf("введите операцию (+, -, *, /) для c и d: ");
    scanf(" %c", &operation);
    switch (operation) {
        case '+':
            printf("c + d: %d\n", c + d);
            break;
        case '-':
            printf("c - d: %d\n", c - d);
            break;
        case '*':
            printf("c * d: %d\n", c * d);
            break;
        case '/':
            if (d != 0) {
                printf("c / d: %.2f\n", (float)c / d);
            } else {
                printf("деление на ноль\n");
            }
            break;
        default:
            printf("не соответствует условию\n");
            break;
    }

    return 0;
}