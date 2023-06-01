#include <stdio.h>

int fibonacci(int n) {
    // Так как 0 и 1 числа фибаначи равны возвращаем это значение
    if (n <= 1)
        return n;
    // Создаём счётчик предыдущих и новых чесел
    int old = 0;
    int schot = 1;

    for (int i = 2; i <= n; i++) {
        // в new присваиваем новое число
        int new = schot;
        // Считаем сумму
        schot = old + schot;
        // присваиваем старому числу значение нового числа
        old = new;
    }
    return schot;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("%d\n", result);
    return 0;
}