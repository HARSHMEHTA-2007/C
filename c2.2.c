#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = smallest = num1;

    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num1;
    if (num2 < smallest)
        smallest = num2;
    if (num3 < smallest)
        smallest = num3;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
