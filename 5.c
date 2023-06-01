#include <stdio.h>

int ispolnitel(int num) {
    int perv, vtor, tret;
    // Разделяем числа на первое число
    perv = num / 100;
    // Второе число
    vtor = (num / 10) % 10;
    // Третье число
    tret = num % 10;

    int summ1, summ2;
    // Перемнажаем
    summ1 = perv * vtor;
    summ2 = vtor * tret;

    int result;
    // Так как при перемножении могут получится 4-х значные числа пишем если первая сумма больше 10 то то мы выводим 4-х значное число
    if (summ1 >= summ2) {
        result = summ1 * 100 + summ2;
        if (summ2 < 10) {
            result = summ1 * 10 + summ2;
        }
    // Так как нам нужно вывести в порядке возрастания делаем тоже самое только если сумма 2 больше суммы 1
    }else {
        result = summ2 * 100 + summ1;
        if (summ1 < 10) {
            result = summ2 * 10 + summ1;
        }
    }
    return result;
}

int main() {
    int number = 989;
    int otvet = ispolnitel(number);
    printf("%d\n", otvet);
    return 0;
}