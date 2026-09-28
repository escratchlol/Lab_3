#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int num;
    puts("введите число");
    scanf("%d", &num);
    printf("введено число %d\n", num);
    int mun;
    puts("введите еще число");
    scanf("%d", &mun);
    printf("введено еще число %d\n", mun);
    printf("сумма %d\n", num + mun);
    printf("разность %d\n", num - mun);
    printf("произведение %d\n", num * mun);
    printf("частное %d\n", mun / num);
    printf("остаток от деления %d\n", mun % num);
    return 0;
}
