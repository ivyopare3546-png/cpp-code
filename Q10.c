#include <stdio.h>

// Q10 - Function to calculate factorial
int factorial(int n){
    int i, fact = 1;
    for(i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int num = 5;
    printf("Number: %d\n", num);
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}
