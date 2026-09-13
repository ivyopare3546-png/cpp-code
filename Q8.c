#include <stdio.h>
int main(){
    // Q8 - Multiplication table using while loop
    int num = 5;
    int i = 1;
    
    printf("Multiplication Table of %d:\n", num);
    while(i <= 12){
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}
