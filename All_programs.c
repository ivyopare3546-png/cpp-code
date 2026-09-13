#include <stdio.h>

// Q10 function
int factorial(int n){
    int i, fact = 1;
    for(i=1; i<=n; i++) fact *= i;
    return fact;
}

int main(){
    // Q1
    printf("=== Q1 Hello World ===\n");
    printf("Hello, World!\n\n");

    // Q2
    printf("=== Q2 Variables ===\n");
    int age = 20;
    float height = 5.6;
    char grade = 'A';
    printf("Age: %d, Height: %.1f, Grade: %c\n\n", age, height, grade);

    // Q3
    printf("=== Q3 Add Two Numbers ===\n");
    int a=10, b=20;
    printf("%d + %d = %d\n\n", a, b, a+b);

    // Q4
    printf("=== Q4 Input/Output ===\n");
    char name[] = "Ivy";
    printf("Name: %s\n\n", name);

    // Q5
    printf("=== Q5 Even/Odd and Grade ===\n");
    int num=10, marks=75;
    if(num%2==0) printf("%d is Even\n", num);
    if(marks>=70) printf("Grade B - Marks %d\n\n", marks);

    // Q6
    printf("=== Q6 Calculator ===\n");
    int x=15, y=3; char op='+';
    switch(op){ case '+': printf("%d + %d = %d\n\n", x,y,x+y); break; }

    // Q7
    printf("=== Q7 Sum 1-10 ===\n");
    int sum=0; for(int i=1;i<=10;i++) sum+=i;
    printf("Sum = %d\n\n", sum);

    // Q8
    printf("=== Q8 Table of 5 ===\n");
    for(int i=1;i<=12;i++) printf("5 x %d = %d\n", i, 5*i);
    printf("\n");

    // Q9
    printf("=== Q9 Largest Array ===\n");
    int arr[5]={12,45,7,89,23}; int largest=arr[0];
    for(int i=0;i<5;i++) if(arr[i]>largest) largest=arr[i];
    printf("Largest: %d\n\n", largest);

    // Q10
    printf("=== Q10 Factorial ===\n");
    printf("Factorial of 5 = %d\n", factorial(5));

    return 0;
}
