#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    const float kolichestvo = 63241.0f;

    float light_years;
    float au;

    printf("введите число световых лет: ");
    scanf("%f", &light_years);

    au = light_years * kolichestvo;

    printf("\n%.2f световых лет = %.2f à.å.\n", light_years, au);

    return 0;
}
