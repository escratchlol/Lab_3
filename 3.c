#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int a, b;

    printf("¬ведите число a: ");
    scanf("%d", &a);
    printf("¬ведите число b: ");
    scanf("%d", &b);

    printf("\n");
    printf("| %-5s | %-5s | %-5s |\n", "a*b", "a+b", "a-b");
    printf("| %-2d*%-2d | %-2d+%-2d | %-2d-%-2d |\n", a, b, a, b, a, b);
    printf("| %-5d | %-5d | %-5d |\n", a * b, a + b, a - b);

    return 0;
}