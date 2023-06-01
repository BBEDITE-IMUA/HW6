#include <stdio.h>

int sumDigits(int *num) {
    // Получаем значение числа из указател
    int chisla = *num;
    // Создаём переменные
    int summ = 0;
    int schot;

    while (chisla != 0) {
        // Берём остакок от деления на 10
        schot = chisla % 10;
        // Сумируем этот остаток
        summ += schot;
        // С помощью деления на 10 убираем последнее число
        chisla /= 10;
    }
    return summ;
}

int main() {
    int number = 123;
    int result = sumDigits(&number);
    printf("%d\n", result);
    return 0;
}