#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n",a- b);
    printf("Multiplication: %d\n",a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);
    return 0;
}
#include <stdio.h>
int main() {
    float radius, area;
    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);
    area = 4 * 3.14 * radius * radius;
    printf("Surface Area of the Sphere: %.2f\n", area);
    return 0;
}
#include <stdio.h>

#include <string.h>
int main() {
    char name[50];
    printf("Enter a string: ");
    scanf("%s", name);
    printf("You entered: %s\n", name);
    printf("Length of the string: %lu\n", strlen(name));
    return 0;
}

