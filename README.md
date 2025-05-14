// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a, b, temp;
    // Write C code here
    printf("Enter the first number(a): ");
    scanf("%d", &a);
    printf("Enter the second number(b): ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n",a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Ater swapping: a = %d, b =%d\n", a, b);
    
    return 0;
}
op
Enter the first number(a): 12
Enter the second number(b): 22
Before swapping: a = 12, b = 22
Ater swapping: a = 22, b =12


=== Code Execution Successful ===
