/*
  Студент: Сорокин Максим Олегович
  Группа : ПИ 1-1
*/
#include <stdio.h>

int main(void)
{
    int number;
    int count = 0;       /* сколько чисел принято */
    int positive = 0;    /* сколько из них положительных */
    long long sum = 0;   /* сумма принятых чисел */
    int working = 1;     /* 1 - продолжаем ввод, 0 - заканчиваем */

    while (working == 1) {
        printf("Enter number (0 to finish): ");

        if (scanf("%d", &number) != 1) {
            printf("Input error\n");
            working = 0;
        }
        else if (number == 0) {
            working = 0;
        }
        else if (number < -1000 || number > 1000) {
            printf("Range error\n");
        }
        else {
            count++;
            sum += number;
            if (number > 0) {
                positive++;
            }
            if (count == 100) {
                working = 0;
            }
        }
    }

    printf("Count = %d\n", count);
    printf("Sum = %lld\n", sum);
    printf("Positive = %d\n", positive);
    return 0;
}
