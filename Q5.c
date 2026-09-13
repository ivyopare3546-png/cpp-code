#include <stdio.h>
int main(){
    // Q5 - Check if number is even or odd and grade
    int marks = 75;
    int num = 10;
    
    if(num % 2 == 0){
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
    
    if(marks >= 80){
        printf("Grade: A - Marks: %d\n", marks);
    } else if(marks >= 70){
        printf("Grade: B - Marks: %d\n", marks);
    } else if(marks >= 60){
        printf("Grade: C - Marks: %d\n", marks);
    } else {
        printf("Grade: F - Marks: %d\n", marks);
    }
    return 0;
}
