#include <stdio.h>
int main(){
    // Q6 - Simple calculator using switch
    char op = '+';
    int a = 15, b = 3;
    
    printf("Calculator: %d %c %d\n", a, op, b);
    
    switch(op){
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            printf("Result: %d\n", a / b);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
