// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float num1,num2;
    // Write C code here
    printf("Enter the first number:");
    scanf("%f", &num1);
    printf("Enter the second number:");
    scanf("%f", &num2);
    if (num1 > 0) {
        printf("The largest number is:%.2f\n", num1);
    } else if (num2 > num1) {
        printf("The largest is:%.2f\n", num2);
    } else {
        printf("both numbers are equal.\n");
    }
    return 0;
}
