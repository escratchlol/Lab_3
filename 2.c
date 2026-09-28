#include <stdio.h>
#include <locale.h>

#define D 2.54
#define P 2.32166

#define M 1.852
#define S 1.609
#define R 1.475
#define ST 7.468
#define G 7.4126

int main() {
    setlocale(LC_ALL, "RUS");

    int dym;
    float result;
    float result1;
    printf("перевод дюймов\n");
    printf("введите значение в дюймах: ");
    scanf("%d", &dym);

    result = D * dym;
    printf("%d английских дюймов – это %.2f ñì\n", dym, result);

    result1 = P * dym;
    printf("%d испанских пульгад – это %.2f ñì\n", dym, result1);

    printf("\nальтернативное задание 2А: мили в км\n");
    printf("введите количество миль: ");
    scanf("%d", &dym);

    printf("\n%d миль — это:\n", dym);
    printf("морская миля:        %.3f êì\n", M * dym);
    printf("сухопутная миля:     %.3f êì\n", S * dym);
    printf("римская миля:        %.3f êì\n", R * dym);
    printf("старорусская миля:   %.3f êì\n", ST * dym);
    printf("географическая миля: %.4f êì\n", G * dym);

    return 0;
}
