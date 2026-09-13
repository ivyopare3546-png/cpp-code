#include <stdio.h>
int main(){
    // Q7 - Sum of first 10 natural numbers using for loop
    int i, sum = 0;
    
    printf("First 10 natural numbers:\n");
    for(i = 1; i <= 10; i++){
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nSum = %d\n", sum);
    return 0;
}
