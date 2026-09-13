#include <stdio.h>
int main(){
    // Q9 - Find largest element in array
    int arr[5] = {12, 45, 7, 89, 23};
    int i, largest;

    largest = arr[0];
    printf("Array elements: ");
    for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    printf("\nLargest element: %d\n", largest);
    return 0;
}
