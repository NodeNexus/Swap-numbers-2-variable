#include <stdio.h>
int main() {
int a,b;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);

/* Swap numbers without using a third variable */
a = a + b;
b = a - b;
a = a - b;

/* Display swapped numbers */
printf("\nSwapped numbers:\n");
printf("First number: %d\n", a);
printf("Second number: %d\n", b);

return 0;
}