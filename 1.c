#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int num;
    puts("Введите число");
    scanf("%d", &num);
    printf("Введено число %d\n", num);
    int mun;
    puts("Введите еще число");
    scanf("%d", &mun);
    printf("Введено еще число %d\n", mun);
    printf("Сумма %d\n", num + mun);
    printf("Разность %d\n", num - mun);
    printf("Произведение %d\n", num * mun);
    printf("Частное %d\n", mun / num);
    printf("Остаток от деления %d\n", mun % num);
    return 0;
}