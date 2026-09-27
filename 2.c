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
    printf("Перевод дюймов\n");
    printf("Введите значение в дюймах: ");
    scanf("%d", &dym);

    result = D * dym;
    printf("%d английских дюймов – это %.2f см\n", dym, result);

    result1 = P * dym;
    printf("%d испанских пульгад – это %.2f см\n", dym, result1);

    printf("\nАльтернативное задание 2А: мили в км\n");
    printf("Введите количество миль: ");
    scanf("%d", &dym);

    printf("\n%d миль — это:\n", dym);
    printf("Морская миля:        %.3f км\n", M * dym);
    printf("Сухопутная миля:     %.3f км\n", S * dym);
    printf("Римская миля:        %.3f км\n", R * dym);
    printf("Старорусская миля:   %.3f км\n", ST * dym);
    printf("Географическая миля: %.4f км\n", G * dym);

    return 0;
}